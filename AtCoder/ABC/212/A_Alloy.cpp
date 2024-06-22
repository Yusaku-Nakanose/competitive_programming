#include <iostream>
using namespace std;

int main() {
    int a, b; cin >> a >> b;
    if(a * b  > 0) cout << "Alloy" << endl;
    else if(a == 0) cout << "Silver" << endl;
    else if(b == 0) cout << "Gold" << endl;
    return 0;
}