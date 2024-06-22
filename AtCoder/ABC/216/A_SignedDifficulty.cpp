#include <iostream>
using namespace std;

int main() {
    double n;
    cin >> n;
    int x = n;
    int y = (double)(n - x) * 10;
    if(y <= 2) cout << x << "-" << endl;
    else if(y <= 6) cout << x << endl;
    else cout << x << "+" << endl;
    return 0;
}