// バケット法による解
#include<iostream>
#include<algorithm>
using namespace std;

int main() {
    int n;
    int d[110];
    cin >> n;
    for (int i = 0; i < n; i++)  cin >> d[i];

    int num[110] = {}; // バケット
    for (int i = 0; i < n; i++) {
        num[d[i]]++; // d[i]が1個増える
    }

    int res = 0;
    for (int i =1 ; i <= 100; i++) { // 1 <= d[i] <= 100 なので1から100まで探索
        if(num[i]) { // 0より大きかったら
            res++;
        }
    }
    cout << res << endl;
}