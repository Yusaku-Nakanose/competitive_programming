#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;
    int n = s.size();
    if(s.substr(n-2) == "er") cout << "er" << endl; // s.substr(i)→i文字目から最後まで
    else cout << "ist" << endl;
    return 0;
}