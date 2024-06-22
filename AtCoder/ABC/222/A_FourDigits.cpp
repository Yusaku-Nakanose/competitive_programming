#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    if(s.size() == 1) cout << "000" << s << endl;
    if(s.size() == 2) cout << "00" << s << endl;
    if(s.size() == 3) cout << "0" << s << endl;
    if(s.size() == 4) cout << s << endl;
    return 0;
}