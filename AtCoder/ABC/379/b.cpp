#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<char> s(n);
    for(int i=0; i<n; i++) cin >> s[i];
    int cnt=0, tmp=0;
    for(int i=0; i<n; i++) {
        if(s[i] == 'O') tmp++;
        if(s[i] == 'X') {
            cnt += tmp/k;
            tmp = 0;
        }
        if(s[i]=='O' && i==n-1) {
            cnt += tmp/k;
        }
    }
    cout << cnt << endl;
    return 0;
}