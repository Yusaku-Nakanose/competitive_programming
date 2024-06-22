#include <iostream>
using namespace std;

int main() {
    int n, p, cnt=0;
    cin >> n >> p;
    for(int i=0, a; i < n; i++) {
        cin >> a; // 新しく値を代入して更新している
        if(a < p) cnt++;
    }
    cout << cnt << endl;
}