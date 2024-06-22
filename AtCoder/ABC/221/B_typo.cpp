#include <iostream>
#include <string>

using namespace std;

int main() {
    string s, t;
    cin >> s >> t;
    string ans = "No";
    if(s == t) ans = "Yes";
    for(int i = 0; i < s.size(); i++) {
        if(s[i] != t[i]) {
            // 端にない場合は左と交換・道と交換の2パターン, 端にある場合は出来る方だけ
            if(0 < i) {
                swap(s[i-1], s[i]);
                if(s == t) ans = "Yes";
                swap(s[i-1], s[i]);
            }
            if(i+1 < s.size()) {
                swap(s[i], s[i+1]);
                if(s == t) ans = "Yes";
                swap(s[i], s[i+1]);
            }
            break; // 揃ってなくて入れ替えても同じにならないなら即break
        }
    }
    cout << ans << endl;
    return 0;
}