#include <iostream>
#include <cmath>
using namespace std;

int main() {
    long long n, cnt = 0;
    cin >> n;
    for(long long a = 1; a*a*a <= n; a++) {
        for(long long b = a; a*b*b <= n; b++) cnt += n/a/b-b+1;
    }
    cout << cnt << endl;
    return 0;
}