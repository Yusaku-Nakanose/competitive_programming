#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    string s;
    cin >> s;
    vector<pair<char, int>> p(26);
    for(int i=0; i<26; i++) {
        p[i].first = s[i];
        p[i].second = i;
    }
    sort(p.begin(), p.end());
    int cnt=0;
    for(int i=0; i<25; i++) cnt += abs(p[i+1].second-p[i].second);
    cout << cnt << endl;
    return 0;
}