#include <iostream>
using namespace std;

int main() {
    int h, w;
    while(true) {
        cin >> h >> w;
        if(h==0 && w==0) break;

        for(int i = 0; i < h; i++) {
            for(int j = 0; j < w; j++) {
                if((i+j)%2 == 0) cout << "#";
                else cout << ".";
                if(j == w-1) cout << endl;
            }
        }
        cout << endl;
    }
    return 0;
}