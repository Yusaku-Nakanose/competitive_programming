#include <iostream>
#include <string>

using namespace std;

int main() {
    string s, t;
    cin >> s >> t;
    cout << (s < t ? "Yes" : "No") << endl; // s<t→Yes, else→No
    return 0;
}