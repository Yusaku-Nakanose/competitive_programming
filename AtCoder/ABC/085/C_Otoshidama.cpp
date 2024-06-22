#include <iostream>
using namespace std;

int main() {
    int n, y;
    cin >> n >> y;
    int res10000 = -1, res5000 = -1, res1000 = -1; // 見つかなかった場合 -1 -1 -1 になる
    for (int i = 0; i <= n; i++) { // 10000円の枚数を 0 ~ n で調べる
        for (int j = 0; i + j <= n; j++) { // 5000円の枚数を 0 ~ n-i で調べる
            int k = n - i - j; // 1000円の枚数は決まる
            int total = 10000*i + 5000*j + 1000*k;
            if (total == y) {
                res10000 = i;
                res5000 = j;
                res1000 = k;
            }
        }
    }
    cout << res10000 << " " << res5000 << " " << res1000 << endl;
    return 0;
}