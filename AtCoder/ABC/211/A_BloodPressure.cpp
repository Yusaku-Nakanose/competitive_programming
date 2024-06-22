#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double a, b; cin >> a >> b;
    double c = (a - b) / 3 + b;
    cout << fixed << setprecision(7);
    cout << c << endl;
    return 0;
}