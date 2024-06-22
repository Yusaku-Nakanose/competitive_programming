#include <iostream>
using namespace std;

int main() {
    int h, w;
    while(true) {
        cin >> h >> w;
        if(h==0 && w==0) break;
        for(int i = 0; i < w; i++) {
            cout << "#";
            if(i==w-1) cout << endl;
        }
        for(int i = 0; i < h-2; i++) {
            for(int j = 0; j < w; j++) {
                if(j==0 || j==w-1) cout << "#";
                else cout << ".";
                if(j==w-1) cout << endl;
            }
        }
        for(int i = 0; i < w; i++) {
            cout << "#";
            if(i==w-1) cout << endl << endl;
        }
    }
    return 0;
}