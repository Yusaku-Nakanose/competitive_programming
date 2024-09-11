#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<string> s(n), t(n);
    for(int i = 0; i < n; i++) cin >> s[i];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < s[i].size(); j++) {
            //t[i] += s[n-1-j];
        }
    }
    cout << s[0] << endl;
    return 0;
}