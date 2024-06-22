#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

int main() {
    int n, total=0;
    cin >> n;
    vector<pair<string,int>> v(n);
    for(int i=0; i<n; i++) {
        string s;
        cin >> s;
        int c;
        cin >> c;
        total += c;
        v.at(i) = make_pair(s, c);
    }

    sort(v.begin(), v.end());
    
    int num = total % n;
    cout << v.at(num).first << endl;
    return 0;
}