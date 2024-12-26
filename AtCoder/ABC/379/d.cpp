#include <iostream>
using namespace std;

int main() {
    int q;
    cin >> q;
    for(int i=0; i<q; i++) {
        int n;
        char c;
        cin >> n;
        if(n == 1) cout << "OK1" << endl;
        else {
            cin >> c;
            if(n == 2) cout << "OK2" << endl;
            if(n == 3) cout << "OK3" << endl;
        }
    }
    return 0;
}