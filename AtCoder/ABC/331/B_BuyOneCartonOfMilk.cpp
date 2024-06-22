#include <iostream>
using namespace std;

int main() {
    int N, S, M, L;
    cin >> N >> S >> M >> L;
    long long ans = 100000000000;
    long long res = 100000000000;
    for(int i = 0; i <= N; i++) {
        for(int j = 0; j <= N; j++) {
            for(int k = 0; k <= N; k++) {
                if(6*i+8*j+12*k >= N) res = i*S + j*M + k*L;
                if(ans > res) ans = res;                
            }
        }
    }
    cout << ans << endl;
    return 0;
}
