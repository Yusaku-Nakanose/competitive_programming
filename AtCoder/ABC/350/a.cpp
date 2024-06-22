#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    int n;
    cin >> s;
    n = stoi(s.substr(3,3));
    if(n<0 || n == 316 || n>349) {
        cout << "No" << endl;
        return 0;
    }
    else cout << "Yes" << endl;
    return 0;
}