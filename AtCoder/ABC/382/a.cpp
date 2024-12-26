#include <iostream>
using namespace std;

int main() {
    int n, d;
    string s;
    cin >> n >> d >> s;

    int cnt=d;
    for(int i=0; i<n; i++) {
        if(s[i] == '.') cnt++; 
    }
    cout << cnt << endl;
    return 0;
}