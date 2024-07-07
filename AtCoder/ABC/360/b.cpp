#include <iostream>
#include <string>
using namespace std;

int main() {
    string s, t;
    cin >> s >> t;
    for(int i = 0; i < s.size(); i++) {
        for(int j = 0; j < i; j++) {
            string u;
            for(int k = 0; j+i*k < s.size(); k++) {
                u += s[j+i*k];
            }
            if(u == t) {
                cout << "Yes" << endl;
                return 0;
            }
        }
    }
    cout << "No" << endl;
    return 0;
}