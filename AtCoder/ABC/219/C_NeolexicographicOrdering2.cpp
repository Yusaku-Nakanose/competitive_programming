#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

int main() {
    string x;
    int n;
    cin >> x >> n;
    vector<string> s(n);
    for(int i = 0; i < n; i++) cin >> s[i];
    // f:xの世界から元の世界へ，g:元の世界からxの世界へ
    map<char, char> f, g;
    // xの世界のi+1文字目のアルファベットx[i]は元の世界では'a'+i
    for(int i = 0; i < 26; i++) f[x[i]] = 'a'+i;
    // 元の世界のi+1文字目のアルファベット'a'+iはxの世界ではx[i]
    for(int i = 0; i < 26; i++) g['a'+i] = x[i];
    // fとgのmapに従ってsをソートする
    for(int i = 0; i < n; i++) for(char& c : s[i]) c = f[c];
    sort(s.begin(), s.end());
    for(int i = 0; i < n; i++) {
        for(char& c : s[i]) c = g[c];
        cout << s[i] << endl;
    }
    return 0;
}