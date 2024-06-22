#include <iostream>
using namespace std;

int main() {
    long long n;
    cin >> n;
    long long k = 1;
    int cnt = 0;
    while(k <= n) {
        k *= 2;
        cnt++;
    }
    cout << cnt - 1 << endl;
    return 0;
}