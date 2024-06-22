#include <iostream>
#include <cmath>
using namespace std;

int main() {
    long long n, cnt = 0;
    cin >> n;
    for(long long a = 1; a*a*a <= n; a++) {
        for(long long b = a; a*b*b <= n; b++) {
            long long uc;
            for(long long c = max(b, n/a/b-5); ; c++) { // それぞれのa,bに対してcの当たりをつけて上限値を探索
                if(a*b*c <= n) uc = c;
                else break;
            }
        cnt += uc-b+1; // それぞれのa,bに対して条件を満たすcの個数を足していく
        }
    }
    cout << cnt << endl;
    return 0;
}