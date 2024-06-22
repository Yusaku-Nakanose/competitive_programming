#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int rps(char a, char b) { // じゃんけん
    if(a == b) return 0; // あいこ
    if(a=='G' && b=='C' || a=='C' && b=='P' || a=='P' && b=='G') return 1; // a勝ち
    else return 2; // b勝ち
}

int main() {
    int n, m;
    cin >> n >> m;
    vector<string> a(2*n);
    for(int i = 0; i < 2*n; i++) cin >> a[i]; // 0~mラウンドのじゃんけんの出す手
    /* 最初は上からi番目の人がi番目(当たり前)だが，途中から勝ち数によって動いて
    何番目の人かわからなくなるから，ちゃんと把握するようにする*/
    vector<pair<int,int>> ans(2*n);
    for(int  i = 0; i < 2*n; i++) ans[i] = pair<int,int> (0,i); // (勝ち数,i番目の人)，初期状態
    
    // 順番がぐちゃぐちゃになって何を出すかわからなくなっていくけど配列の添え字で繋げることでできる
    int result; // じゃんけんの返り値が入れられる
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < 2*n; j+=2) {
            // 配列aのans[j].second番目の[i]番目の文字(iラウンド目でans[j].second人目の人が出す手)
            result = rps(a[ans[j].second][i], a[ans[j+1].second][i]);
            if(result == 1) ans[j].first++;
            else if(result == 2) ans[j+1].first++;
        }
        // 一つ上のループでiが使われているが，固定されているいし，使い終わるから問題ない?
        for(int i = 0; i < 2*n; i++) ans[i].first *= -1; // 昇順のソートで降順ソートを行う工夫(勝ち数多い→上に行く)
        sort(ans.begin(), ans.end()); // sort(ans.begin(), ans.end(), greater<int>());でもok，ほかにもやり方はある
        for(int i = 0; i < 2*n; i++) ans[i].first *= -1;
    }
    for(int i = 0; i < 2*n; i++) cout << ans[i].second+1 << endl; // i番目の人はans[i-1]に入っているから
    return 0;
}