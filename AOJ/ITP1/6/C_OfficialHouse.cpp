#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int cnt[4][3][10] = {};
    int x, y, z, num;
    for(int i = 0; i < n; i++) {
        cin >> x >> y >> z >> num;
        cnt[x-1][y-1][z-1] += num;
    }
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 3; j++) {
            for(int k = 0; k < 10; k++) {
                cout << " " << cnt[i][j][k];
            }
            cout << endl;
        }
        if(i!=3) cout << "####################" << endl;
    }
    return 0;
}