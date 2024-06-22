#include <iostream>
using namespace std;

int main() {
    string s, p;
    cin >> s >> p;
    s += s;
    for(int i = 0; i+p.size() < s.size(); i++) {
        string ans = s.substr(i, p.size());
        if(ans == p) {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}