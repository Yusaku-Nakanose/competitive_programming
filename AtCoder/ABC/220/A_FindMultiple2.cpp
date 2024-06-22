#include <iostream>

using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int x = b / c * c;
    if(x >= a) cout << x << endl;
    else cout << -1 << endl;
    return 0;
}