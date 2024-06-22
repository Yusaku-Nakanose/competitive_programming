#include <iostream>
#include <vector>
using namespace std;

int main() { // 最悪でも2*log2(10^18)<120
    long long n;
    cin >> n;
    vector<string> s(0);
    while(n != 0) {
        if(n%2 == 0) {
            n /= 2;
            s.push_back("B");
        }
        else {
            n--;
            s.push_back("A");
        }
    }
    for(int i = s.size()-1; i >= 0; i--) cout << s[i]; // 逆から
    return 0;
}