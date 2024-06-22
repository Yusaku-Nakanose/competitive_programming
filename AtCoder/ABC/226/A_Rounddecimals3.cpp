#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a;
    cin >> a;
    // 四捨五入の境界(0.5)を避けるため十分小さい値を加える
    // 小数第3位まで入力されるから0.005などでは不可
    cout << (int)round(a+0.0005) << endl; // (int)round(a)でも可
    return 0;
}