// Monge行列
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int h, w;
    cin >> h >> w;
    vector<vector<int>> a(h, vector<int>(w)); // h*wのベクトル配列
    for(int i = 0; i < h; i++) {
        for(int j = 0; j < w; j++) {
            cin >> a.at(i).at(j);
        }
    }
    bool flag = true;
    for(int i = 0; i < h-1; i++) {
        for(int j = 0; j < w-1; j++) {
            for(int k = i+1; k < h; k++) {
                for(int l = j+1; l < w; l++) {
                    int left = a.at(i).at(j) + a.at(k).at(l);
                    int right = a.at(k).at(j) + a.at(i).at(l);
                    if(left > right) {
                        flag = false;
                        break;
                    }
                } 
            }
        }
    }
    if(flag) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}