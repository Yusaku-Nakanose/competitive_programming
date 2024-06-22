#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, x, cnt = 1;
    cin >> n >> x;
    vector<int> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        a[i]--;
    }
    vector<bool> know(n);
    know[x-1] = true;
    int i = x-1;
    while(true) {
        if(know[i]) { // 必要ない
            if(know[a[i]]) {
                cout << cnt << endl;
                return 0;
            }
            else {
                know[a[i]] = true;
                cnt++;
            }
        }
        i = a[i];
    }
}