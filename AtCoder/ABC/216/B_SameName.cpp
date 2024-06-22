#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<string> s(n), t(n);
    for(int i = 0; i < n; i++) cin >> s[i] >> t[i];
    bool flag = false;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < i; j++) {
            if(s[i] == s[j] && t[i] == t[j]) {
                flag = true;
                break; 
            }
        }
    }
    
    if(flag) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}