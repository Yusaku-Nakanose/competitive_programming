#include <iostream>
#include <string>
using namespace std;

int main() {
    for(int i = 0; i < 3; i++) {
        char s;
        cin >> s;
        if(s == 'R') {
            cout << "Yes" << endl;
            return 0;
        }
        else if(s == 'M') {
            cout << "No" << endl;
            return 0;
        }
    }
}