#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    vector<string> s(2);
    cin >> s[0] >> s[1];
    vector<string> t(2);
    t[0] = s[0];
    t[1] = t[1];
    sort(s.begin(), s.end());
    if(s[0] == t[0]) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}