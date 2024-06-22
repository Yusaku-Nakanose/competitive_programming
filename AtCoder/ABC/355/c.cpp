#include <iostream>
#include <map>
using namespace std;

int main() {
    int n, t;
    cin >> n >> t;
    
    if(t < n) {
        cout << "No" << endl;
        return 0;
    }

    map<int, bool> mp;
    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        mp[x] = true;
    }

    bool vert=true, horiz=true, diag=true;
    //縦
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            vert &= mp[n*(i-1)+j-1];
            horiz &= mp[n*(j-1)+i];
        }
        if(vert || horiz) { 
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}