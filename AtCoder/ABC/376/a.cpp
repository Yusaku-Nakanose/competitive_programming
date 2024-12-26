#include <iostream>

using namespace std;

int main() {
    int n, c;
    cin >> n >> c;
    int pre=-10000, cnt=0;
    for(int i=0; i<n; i++) {
        int tmp;
        cin >> tmp;
        if(tmp-pre >= c) {
            cnt++;
            pre = tmp;
        }
    }
    cout << cnt << endl;
    return 0;
}