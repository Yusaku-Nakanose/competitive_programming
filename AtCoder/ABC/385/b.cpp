#include <iostream>
#include <vector>
using namespace std;

int main() {
    int h, w, x, y, cnt=0;
    cin >> h >> w >> x >> y;
    x--;
    y--;
    vector<vector<char>> s(h, vector<char>(w));
    vector<vector<bool>> flg(h, vector<bool>(w));
    for(int i=0; i<h; i++) {
        for(int j=0; j<w; j++) cin >> s[i][j];
    }
    string t;
    cin >> t;
    for(int i=0; i<t.size(); i++) {
        if(t[i]=='U' && s[x-1][y]!='#') {
            if(s[x-1][y] == '@') flg[x-1][y]=true;
            x--;
        }
        else if(t[i]=='D' && s[x+1][y]!='#') {
            if(s[x+1][y] == '@') flg[x+1][y]=true;
            x++;
        }
        else if(t[i]=='L' && s[x][y-1]!='#') {
            if(s[x][y-1] == '@') flg[x][y-1]=true;
            y--;
        }
        else if(t[i]=='R' && s[x][y+1]!='#') {
            if(s[x][y+1] == '@') flg[x][y+1]=true;
            y++;
        }
    }
    for(int i=0; i<h; i++) {
        for(int j=0; j<w; j++) if(flg[i][j]) cnt++;
    }
    cout << x+1 << " " << y+1 << " " << cnt << endl;
    return 0;
}