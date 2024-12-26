#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<pair<int, char>> p(5);
    for(int i=0; i<5; i++) cin >> p[i].first;
    p[0].second = 'a';
    p[1].second = 'b';
    p[2].second = 'c';
    p[3].second = 'd';
    p[4].second = 'e';

    sort(p.begin(), p.end());

    vector<char> ans(5);
    for(int i=0; i<5; i++) ans[i] = p[i].second;
    for(int i=0; i<5; i++) cout << ans[i] << endl;
    //for(int i=0; i<5; i++) cout << p[i] << endl;
}