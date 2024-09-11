#include <iostream>
using namespace std;

int main() {
    int n, t, a;
    cin >> n >> t >> a;
    if(t>n/2 || a>n/2) {
        cout << "Yes" << endl;
        return 0;
    }
    else {
        cout << "No" << endl;
        return 0;
    }
}