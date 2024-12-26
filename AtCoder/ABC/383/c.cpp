#include <iostream>
#include <vector>
using namespace std;

int main() {
    int h, w, d;
    cin >> h >> w >> d;
    vector<vector<char>> s(h, vector<char>(w));
    vector<pair<int,int>> coord;
    for(int i=0; i<h; i++) {
        for(int j=0; j<w; j++) {
            cin >> s.at(i).at(j);
            if(s.at(i).at(j) == 'H') coord.push_back({i,j});
        }
    }
    vector<vector<bool>> flg(h, vector<bool>(w));
    for(int i=0; i<h; i++) {
        for(int j=0; j<w; j++) {
            if(s.at(i).at(j) == '#') continue;
            for(int k=0; k<coord.size(); k++) {
                if(abs(i-coord[k].first) + abs(j-coord[k].second) <= d) flg.at(i).at(j) = true;
            }
        }
    }
    int cnt=0;
    for(int i=0; i<h; i++) {
        for(int j=0; j<w; j++) {
            if(flg.at(i).at(j)) cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}