#include <iostream>

using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    bool exist = false;
    int x = c;
    while(x <= b) {
        if(a <= x && x <= b) {
            cout << x << endl;
            exist = true;
            break;
        }
        x += c;
    }
    if(!exist) cout << -1 << endl;
    return 0;
}