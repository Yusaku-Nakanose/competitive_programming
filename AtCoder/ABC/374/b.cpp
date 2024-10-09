#include <iostream>

using namespace std;

int main() {
    string s, t;
    cin >> s >> t;
    int M = max(s.size(), t.size());
    for(int i=0; i<M; i++) {
        if(s[i] != t[i]) {
            cout << i+1 << endl;
            return 0;
        }
    }
    cout << 0 << endl;
    return 0;
}