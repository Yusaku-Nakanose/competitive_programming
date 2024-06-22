#include <iostream>
using namespace std;

int factorial(int n) {
    int sum = 1;
    for (int i = 1; i <= n; ++i)    sum *= i;
    return sum;
}

int main() {
    int p;  cin >> p;
    int max = 10;
    int cnt = 0;
    while(p > 0) {
        if(p >= factorial(max)) {
            p -= factorial(max);
            cnt++;
        }
        else    max--;
    }
    cout << cnt << endl;
    return 0;
}