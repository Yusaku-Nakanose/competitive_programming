#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<string> s(n), t(n);
    string ans = "No";

    for(int i = 0; i < n; i++) {
        cin >> s[i] >> t[i];
        for(int j = 0; j < i; j++) {
            if(s[i]==s[j] && t[i]==t[j]) ans = "Yes";
        }
    }
    
    cout << ans << endl;
    return 0;
}