#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    vector<string> S(3);
    // string&:参照渡し, これをしないと下のansのとこで何も入っていないのを出力する?
    for(string& s : S) cin >> s;
    string T;
    cin >> T;
    string ans;
    for(const char t : T) ans += S[t-'1']; // constであることを強調するため? なくても変わらない
    cout << ans << endl;
    return 0;
}