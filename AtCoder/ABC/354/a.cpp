#include <iostream>
#include <math.h>
using namespace std;

int main() {
    long long h;
    cin >> h;
    for (int i = 0; i < 1000; i++){
        if(h < pow(2,i)-1) {
            cout << i << endl;
            return 0;
        }
    }
    return 0;
}