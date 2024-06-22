#include <iostream>
using namespace std;

int main() {
    int s, t, x;
    cin >> s >> t >> x;
    if(s<t && s<=x && x<t) {
        cout << "Yes" << endl;
        return 0;
    }
    if(s>t) {
        if((0<=x && x<t)|| s<=x) {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}