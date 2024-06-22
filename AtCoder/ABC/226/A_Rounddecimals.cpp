#include <iostream>
using namespace std;

int main() {
    double x;
    cin >> x;
    int a = (int)(10 * x) % 10;
    int b = (int)x;
    if(a <= 4) cout << b << endl;
    else cout << b+1 << endl;
    return 0;
}