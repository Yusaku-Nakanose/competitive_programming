#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<char> s(n);
    for(int i=0; i<n; i++) cin >> s[i];
    int cnt=0;
    for(int i=0; i<n-2; i++) {
        if(s[i]=='#' && s[i+1]=='.' && s[i+2]=='#') cnt++;
    }
    cout << cnt << endl;
    return 0;
}