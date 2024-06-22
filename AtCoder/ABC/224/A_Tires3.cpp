#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;
    if(s[s.size()-1] == 'r') cout << "er" << endl; // tで判定してもok
    else cout << "ist" << endl;
    return 0;
}