#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n; cin >> n;
    vector<int> x(4);
    x[1] = n / 1000;
    x[2] = n % 1000 /100;
    x[3] = n % 100 /10;
    x[4] = n % 10;
    bool strong = true;
    if(x[1] == x[2] && x[2] == x[3] && x[3] == x[4]) {
        cout << "Weak" << endl;
        strong = false;
    }
    if(x[2] == (x[1] + 1) % 10 && x[3] == (x[2] + 1) % 10 && x[4] == (x[3] + 1) % 10) {
        cout << "Weak" << endl;
        strong = false;
    }
    if(strong) cout << "Strong" << endl;
    return 0;
}