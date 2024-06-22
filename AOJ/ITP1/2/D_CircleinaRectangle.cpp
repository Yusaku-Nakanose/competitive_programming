#include <iostream>

using namespace std;

int main() {
    int w, h, x, y, r;
    cin >> w >> h >> x >> y >> r;
    bool flag = true;
    if(w<x+r || 0>x-r || h<y+r || 0>y-r) cout << "No" << endl;
    else cout << "Yes" << endl;
    return 0;
}