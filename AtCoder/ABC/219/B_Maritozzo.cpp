#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    vector<string> s(3);
    string t;
    cin >> s[0] >> s[1] >> s[2] >> t;
    for(int i = 0; i < t.size(); i++) {
        if(t.substr(i, 1) == "1") cout << s[0];
        if(t.substr(i, 1) == "2") cout << s[1];
        if(t.substr(i, 1) == "3") cout << s[2];
    }
    return 0;
}