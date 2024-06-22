#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;
    int n = s.size();
    if(s[n-2]=='e' && s[n-1]=='r') cout << "er" << endl;
    else if(s[n-3]=='i' && s[n-2]=='s' && s[n-1]=='t') cout << "ist" << endl;
    return 0;
}