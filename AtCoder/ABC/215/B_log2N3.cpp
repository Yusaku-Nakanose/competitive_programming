#include <iostream>
using namespace std;

int main() { // nが二進数でk桁(n=1*2^(k-1)+~)→答えはk-1
    long long n;
    cin >> n;
    for(int i = 60; i >= 0; i--) { // 上の値から
        if(n&(1ll<<i)) { // 1ll:longlong型の1をiだけ左シフトしてnとANDをとる
            cout << i << endl;
            break;
        }
    }
    return 0;
}