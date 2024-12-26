#include <iostream>
#include <vector>
using namespace std;

int main() {
    int h, w, d;
    cin >> h >> w >> d;
    vector<vector<char>> s(h, vector<char>(w));
    for(int i=0; i<h; i++) {
        for(int j=0; j<w; j++) cin >> s.at(i).at(j);
    }
    int M=0;
    for(int x1=0; x1<h; x1++) {
        for(int y1=0; y1<w; y1++) {
            if(s.at(x1).at(y1) == '#') continue;
            for(int x2=x1; x2<h; x2++) {
                for(int y2=y1; y2<w; y2++) {
                    if(s.at(x2).at(y2) == '#') continue;
                    int cnt=0;
                    for(int i=0; i<h; i++) {
                        for(int j=0; j<w; j++) {
                            if(s.at(i).at(j) == '#') continue;
                            if(abs(i-x1)+abs(j-y1) <= d || abs(i-x2)+abs(j-y2) <= d) cnt++;
                        }
                    }
                    M = max(M, cnt);
                }
            }
        }
    }
    cout << M << endl;
    return 0;
}