#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string s;
    int k;
    cin >> s >> k;
    sort(s.begin(), s.end());
    for(int i = 0; i < k-1; i++) next_permutation(s.begin(), s.end());
    cout << s << endl;
    return 0;
}