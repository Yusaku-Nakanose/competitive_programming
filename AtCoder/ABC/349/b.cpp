#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    map<char, int> cnt, ans;
    for (int i = 0; i < s.size(); i++) {
        cnt[s[i]]++;
    }
    for (int i = 0; i < cnt.size(); i++) {
        ans[cnt[i]]++;
    }
    for (int i = 1; i < ans.size(); i++) cout << ans[i] << endl;
    for(int i = 1; i < ans.size(); i++) {
        if(!(ans[i]==0||ans[i]==2)) {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}