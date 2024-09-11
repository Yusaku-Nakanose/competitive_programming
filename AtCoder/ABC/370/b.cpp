#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    int k=1;
    vector<vector<int>> a(n, vector<int>(n));
    for(int i=0; i<n; i++) {
        for(int j=0; j<k; j++) cin >> a[i][j];
        k++;
    }
    int tmp=0;
    for(int i=0; i<n; i++) {
        int M=max(tmp, i), m=min(tmp, i);
        tmp = a.at(M).at(m)-1;
    }
    cout << tmp+1 << endl;
    return 0;
}