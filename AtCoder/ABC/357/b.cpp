#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string s, large, small;
    cin >> s;
    large = s;
    small = s;
    int cnt = 0;
    for (int i = 0; i < s.size(); i++) {
        if(large[i] == toupper(s[i])) cnt++;
        large[i] = toupper(s[i]);
        small[i] = tolower(s[i]);
    }
    if(cnt > s.size()/2) cout << large << endl;
    else cout << small << endl;
    return 0;
}