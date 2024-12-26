#include <iostream>
using namespace std;

int main() {
    int n, d;
    string s;
    cin >> n >> d >> s;

    int cnt=d;
    for(int i=0; i<n; i++) {
        if(s[n-1-i]=='@' && d>0) {
            s[n-1-i] = '.';
            d--;
        }
    }
    cout << s << endl;
    return 0;
}