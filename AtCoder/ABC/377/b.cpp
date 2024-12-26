#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<string> s(8);
    vector<bool> vert(8), horz(8);
    for(int i=0; i<8; i++) cin >> s[i];
    for(int i=0; i<8; i++) {
        for(int j=0; j<8; j++) {
            if(s[i][j] == '#') {
                vert[i] = true;
                horz[j] = true;
            }
        }
    }
    int x=0, y=0;
    for(int i=0; i<8; i++) {
        if(!vert[i]) y++;
        if(!horz[i]) x++;
    }
    cout << x*y << endl;
    return 0;
}