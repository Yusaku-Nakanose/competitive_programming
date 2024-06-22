#include <iostream>
using namespace std;

int main() {
    int cnt = 0;
    for(int a = 1; a <= 1000; a++) {
        for(int b = 1; b <= 1000; b++) {
            int s = 4*a*b + 3*a + 3*b;
            if(s <= 1000) {
                cout << s << ", ";
                cnt++;
            }
        }
    }
    cout << cnt << endl;
    return 0;
}