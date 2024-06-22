#include <iostream>
using namespace std;

int main() {
    long long a, b, c, d;
    cin >> a >> b >> c >> d;
    long long cnt;
    if(b >= c * d)   cnt = -1;
    else    cnt = (a + (c * d - b) - 1) / (c * d - b);
    cout << cnt << endl;
    return 0;
}