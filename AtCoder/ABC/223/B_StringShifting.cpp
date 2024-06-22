#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;
    string a = s, b = s, x = s;
    int n = s.size();
    for(int i = 0; i < n; i++) {
        string s = x;
        for(int j = 0; j < n; j++) {
            x[(j+1)%n] = s[j];
        }
        a = min(a, x);
        b = max(b, x);
    }
    cout << a << endl << b << endl;
    return 0;
}