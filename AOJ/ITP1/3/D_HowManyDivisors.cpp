#include <iostream>

using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int cnt = 0;
    for(int i = a; i <= b; i++) {
        if(!(c%i)) cnt++; // a<=i<=bのiでcが割り切れたら(c%i==0)カウント
    }
    cout << cnt << endl;
    return 0;
}