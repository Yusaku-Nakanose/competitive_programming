#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> deg(n); // 各頂点の次数(degree)
    for(int i = 0; i < n-1; i++) {
        int a, b;
        cin >> a >> b;
        --a; --b;
        deg[a]++;
        deg[b]++;
    }
    for(int i = 0; i < n; i++) {
        if(deg[i] == n-1) {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}