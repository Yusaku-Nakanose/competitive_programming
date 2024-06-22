// よくわからないやり方
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    string x;
    cin >> x;
    vector<int> pos(26); // position:要素(アルファベット)の配置方法
    for(int i = 0; i < 26; i++) {
        /* pos[k]=n→k+1文字目のアルファベットはこの世界ではn+1文字目
           x=zyx~cba→pos[25]=0,pos[0]=25
           この世界xにおけるi文字目は元の世界でi番目 */
        pos[x[i]-'a'] = i;
    }
    int n;
    cin >> n;
    vector<string> S(n);
    for(string& s : S) cin >> s;

    // 文字列の比較
    // 第3引数に比較関数オブジェクト(return s.size() < t.size();}まで)
    sort(begin(S), end(S), [&](const string& s, const string& t) {
        // size(arr)はarr.size()を返す(この使い方ができるのはC++だけ?)
        // int len = min(size(s), size(t));
        int len = min(s.size(), t.size());
        for(int i = 0; i < len; i++) {
            if(s[i] != t[i]) {
                return pos[s[i]-'a'] < pos[t[i]-'a']; // 0 or 1
            }
        }
        // return size(s) < size(t); // 0 or 1
        return s.size() < t.size(); // 0 or 1
    });

    for(const string& s : S) {
        cout << s << "\n";
    }
    return 0;
}