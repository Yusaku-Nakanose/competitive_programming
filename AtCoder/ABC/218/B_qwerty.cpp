#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    vector<int> p(26);
    for(int i = 0; i < 26; i++) cin >> p[i];
    string s = "abcdefghijklmnopqrstuvwxyz";
    for(int i = 0; i < 26; i++) cout << s.substr(p[i]-1, 1);
    return 0;
}