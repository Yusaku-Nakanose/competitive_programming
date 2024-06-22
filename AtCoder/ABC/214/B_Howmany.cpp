#include <iostream>
using namespace std;

int main() {
    int s, t;
    cin >> s >> t;
    int cnt = 0;
    int sum, mul;
    for(int a = 0; a <= s; a++) {
        for(int b = 0; a+b <= s; b++) {
            for(int c = 0; a+b+c <= s; c++) {
                mul = a * b * c;
                if(mul <= t) cnt++;
            }
        }
    }
    cout << cnt << endl;
    return 0;
}