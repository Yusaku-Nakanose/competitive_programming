#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> b(n, vector<int>(m));
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) cin >> b[i][j];
    }
    vector<vector<int>> x(n, vector<int>(m)), y(n, vector<int>(m));
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            x[i][j] = (b[i][j]+6)/7; // b[i][j]が何行目か
            y[i][j] = (b[i][j]-1)%7+1;  // b[i][j]が何列目か
        }
    }
    string ans = "Yes";
    for(int i = 0; i < n; i++) { // n=1の可能性を考慮?
        for(int j = 0; j < m; j++) { // m=1の可能性を考慮?
            if(0<i && x[i][j]!=x[i-1][j]+1) ans = "No";
            if(0<j && y[i][j]!=y[i][j-1]+1) ans = "No";
        }
    }
    cout << ans << endl;
    return 0;
}