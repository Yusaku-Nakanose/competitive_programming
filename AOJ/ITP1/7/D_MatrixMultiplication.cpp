#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, m, l;
    cin >> n >> m >> l;
    vector< vector<int> > a(n, vector<int>(m)), b(m, vector<int>(l));
    vector< vector<long long> > c(n, vector<long long>(l));
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) cin >> a.at(i).at(j);
    }
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < l; j++) cin >> b.at(i).at(j);
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < l; j++) {
            for(int k = 0; k < m; k++) {
                c.at(i).at(j) += a.at(i).at(k)*b.at(k).at(j);
            }
            cout << c.at(i).at(j) << " \n"[j==l-1];
        }
    }
    return 0;
}