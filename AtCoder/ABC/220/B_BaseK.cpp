#include <iostream>
#include <vector>

using namespace std;

long long f(string s, int k) { // k進法表記のsを10進法表記で返す関数
    long long ans = 0;
    for(char x:s) { // 上の値から
        ans *= k;
        ans += x - '0'; // 1文字の数字から1桁の整数値へ変換してから加算
    }
    return ans;
}

int main() {
    int k;
    string a, b;
    cin >> k >> a >> b;
    long long A = f(a, k), B = f(b, k);
    cout << A * B << endl;
    return 0;
}