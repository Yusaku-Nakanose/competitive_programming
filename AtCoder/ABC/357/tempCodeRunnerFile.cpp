#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    for(int i = 1; i <= n; i++)  {
        int h;
        cin >> h;
        m -= h;
        if(m == 0) {
            cout << i << endl;
            return 0;
        }
        else if(m < 0) {
            cout << i-1 << endl;
            return 0;
        }
        else if(i == n && m > 0) {
            cout << i << endl;
            return 0;
        }
    }
    return 0;
}