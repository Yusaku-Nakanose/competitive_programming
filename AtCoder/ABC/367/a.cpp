#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    if(c < b) {
        if(c<a && a<b) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    else {
        if(b<a && a<c) cout << "No" << endl;
        else cout << "Yes" << endl;
    }
    return 0;
}