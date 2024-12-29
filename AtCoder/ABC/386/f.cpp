#include <iostream>
using namespace std;

int main() {
    int k;
    string s, t;
    cin >> k >> s >> t;

    if((max(s.size(), t.size()) - min(s.size(), t.size())) > k) {
        cout << "No" << endl;
        return 0;
    }

    while(k) {
        k--;
        if(s == t) {
            cout << "Yes" << endl;
            return 0;
        }
        for(int i=0; i<min(s.size(),t.size()); i++) {
            if(s[i]==t[i]) {
                s.erase(i,1);
                t.erase(i,1);
            }
            if(s[i]!=t[i]) break;
        }

        if(s.size() == t.size()) { // 置き換え
            for(int i=0; i<s.size(); i++) {
                if(s[i]!=t[i]) {
                    s.erase(i,1);
                    t.erase(i,1);
                    break;
                }
            }
        }

        else if(s.size() > t.size()) { // 削除
            for(int i=0; i<t.size(); i++) {
                if(s[i]!=t[i]) {
                    s.erase(i,1);
                    break;
                }
                if(i==t.size()-1) {
                    cout << "Yes" << endl;
                    return 0;
                }
            }
        }
        else if(s.size() < t.size()) { // 挿入
            for(int i=0; i<s.size(); i++) {
                if(s[i]!=t[i]) {
                    t.erase(i,1);
                    break;
                }
                if(i==s.size()-1) {
                    cout << "Yes" << endl;
                    return 0;
                }
            }
        }
    }
    if(s==t) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}