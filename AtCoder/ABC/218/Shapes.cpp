#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<string> s(n), t(n);
    for(int i = 0; i < n; i++) cin >> s[i];
    for(int i = 0; i < n; i++) cin >> t[i];
    
    // ラムダ式:簡易的な関数オブジェクトをその場で定義するための機能，高階関数を使いやすくできる
    // []:キャプチャ，ラムダ式で外側の変数を使用するため，s,tとかくとsとtだけアクセスできる，&とかいたらすべての変数にアクセスできる
    auto rot = [&](vector<string> a) { // 回転させる関数
        vector<string> res(n, string(n, '.')); // n文字の'.'がある文字列がn個あるベクトル配列，アスタリスクがない状態のn*n行列
        for(int i = 0; i < n; i++) { // nの2重ループで一つずつ埋めていく
            for(int j = 0; j < n; j++) {
                res[j][n-1-i] = a[i][j]; // 回転した時の座標に入れていく
            }
        }
        return res;
    };

    // #は1つ以上あるので，なくて揃えられない心配はいらない
    auto normalize = [&](vector<string> a) { // 一番左，一番上のラインを揃える関数
        int li = n, lj = n; // 初期値を一番右，一番下に設定
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                if(a[i][j] == '#') {
                    li = min(li, i); // 更新していって最小値を求める
                    lj = min(lj, j);
                }
            }
        }
        vector<string> res(n, string(n, '.'));
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                if(a[i][j] == '#') { // 座標(i,j)に#がある場合
                    // 添え字がマイナスになる心配はいらない(自明)
                    res[i-li][j-lj] = '#'; // 座標をラインを揃えるように移動
                }
            }
        }
        return res;
    };

    auto same = [&](vector<string> a, vector<string> b) { // 同じかどうか判断する関数
        return normalize(a) == normalize(b); // 0 or 1
    };

    for(int ri = 0; ri < 4; ri++) {
        if(same(s, t)) {
            cout << "Yes" << endl;
            return 0;
        }
        t = rot(t);
    }
    cout << "No" << endl;
    return 0;
}