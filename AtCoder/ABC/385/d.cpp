#include <iostream>
#include <vector>
#include <tuple>

using namespace std;

int main() {
    int n, m, sx, sy;
    cin >> n >> m >> sx >> sy;
    vector<tuple<int,int, bool>> flg(n);
    for(int i=0; i<n; i++) {
        int x, y;
        cin >> x >> y;
        flg[i] = make_tuple(x, y, false);
    }
    vector<pair<char, int>> act(m);
    for(int i=0; i<m; i++) cin >> act[i].first >> act[i].second;

    for(int i=0; i<m; i++) {
        if(act[i].first == 'U') sy += act[i].second;
        else if(act[i].first == 'D') sy -= act[i].second;
        else if(act[i].first == 'L') sx -= act[i].second;
        else if(act[i].first == 'R') sx += act[i].second;
    }
    cout << sx << " " << sy << endl;

    return 0;
}