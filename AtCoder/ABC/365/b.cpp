#include <iostream>
#include <vector>
#include <algorithm>
#include <tuple>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<pair<int, int>> a(n);
    for(int i = 0; i<n; i++) {
        int tmp;
        cin >> tmp;
        a.at(i) = make_pair(tmp, i);
    }
    sort(a.begin(), a.end());
    int x,y;
    tie(x, y) = a.at(n-2);
    cout << y+1 << endl;
    return 0;
}