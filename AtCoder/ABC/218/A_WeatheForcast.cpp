#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    int n;
    string s;
    cin >> n >> s;
    if(s.substr(n-1, 1) == "o") cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}