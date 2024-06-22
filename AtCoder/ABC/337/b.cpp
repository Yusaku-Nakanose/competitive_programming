#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    int n = s.size();
    for (int i = 0; i < n-1; i++) {
        if(s[i]+s[i+1] == 'BA' || s[i]+s[i+1] == 'CA' || s[i]+s[i+1] == 'CB') {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}