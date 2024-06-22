#include <iostream>
#include <string>
#include <set>
#include <vector>
#include <algorithm>
using namespace std;

set<string> st; // 完成したものを入れる, set:重複を除去して管理するデータ構造, ソートしてくれる

void dfs(string s, string cs) { // s:今試している文字列, cs:残り使える文字列
    if(cs == "") { // 終了条件:csがなくなる
        st.insert(s); // sをstに入れる
        return;
    }
    for(int i = 0; i < cs.size(); i++) {
        string ncs = cs; // next cs
        ncs.erase(ncs.begin()+i); // sにcs[i]を追加するのでncsからcs[i]を削除
        dfs(s+cs[i], ncs);
    }
}

int main() {
    string s;
    int k;
    cin >> s >> k;
    dfs("", s); // 最初は試している文字列はない
    vector<string> ss;
    for(string t : st) ss.push_back(t);
    sort(ss.begin(), ss.end()); // する必要はないが一応
    cout << ss[k-1] << endl;
    return 0;
}