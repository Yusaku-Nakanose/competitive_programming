#include <iostream>
using namespace std;

//各桁の和を計算する関数
int Sum(int n) {
    int sum = 0;
    while(n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main(){
    int n, a, b, cnt=0;
    cin >> n >> a >> b;
    for(int i = 1; i <= n; i++) {
        int sum = Sum(i);
        if(a <= sum && sum <= b)    cnt += i;
    }
    cout << cnt << endl;
    return 0;
}