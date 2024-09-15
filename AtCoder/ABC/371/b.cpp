#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> a(m);
    vector<char> b(m);
    for(int i=0; i<m; i++) cin >> a[i] >> b[i];
    vector<bool> flg(n);
    for(int i=0; i<m; i++) {
        if(!flg[a[i]] && b[i]=='M') {
            cout << "Yes" << endl;
            flg[a[i]] = true;
        }
        else cout << "No" << endl;
    }
    return 0;
}