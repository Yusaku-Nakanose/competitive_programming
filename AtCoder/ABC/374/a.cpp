#include <iostream>

using namespace std;

int main() {
    string s;
    cin >> s;
    char a=s[s.size()-3], b=s[s.size()-2], c=s[s.size()-1];
    if(a=='s' && b=='a' && c=='n') cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}