#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> a(n, vector<int>(m));
    vector<int> b(m);
    vector<int> c(n);
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) cin >> a.at(i).at(j);
    }
    for(int i = 0; i < m; i++) cin >> b[i];

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) c[i] += a.at(i).at(j)*b[j];
        cout << c[i] << endl;
    }
    return 0;
}