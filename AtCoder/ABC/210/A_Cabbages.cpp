#include <iostream>
using namespace std;

int main() {
    int n, a, x, y;
    cin >> n >> a >> x >> y;

    int cnt = 0;
    if(n <= a)  cout << n * x << endl;
    else        cout << a * x + (n - a) * y << endl;
    return 0;
}