#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    cout << max({a+b, b+c, c+a}) << endl;
    return 0;
}