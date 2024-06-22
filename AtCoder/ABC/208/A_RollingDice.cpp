#include <iostream>
using namespace std;

int main() {
    long long a, b;
    cin >> a >> b;
    if(6 * a >= b && a <= b)   cout << "Yes" << endl;
    else            cout << "No" << endl;
    return 0;
}