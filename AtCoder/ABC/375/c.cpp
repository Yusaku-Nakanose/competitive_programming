#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<vector<char>> a(n+1, vector<char>(n+1)), b(n+1, vector<char>(n+1));
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=n; j++) {
            cin >> a.at(i).at(j);
        }
    }

    for(int i=1; i<=n; i++) {
        for(int j=1; j<=n; j++) {
            b.at(i).at(j) = a.at(i).at(j);
        }
    }

    for(int i=1; i<=n/2; i++) {
        for(int x=i; x<=n+1-i; x++) {
            for(int y=i; y<=n+1-i; y++) {
                a.at(y).at(n+1-x) = b.at(x).at(y);
            }
        }
        for(int x=1; x<=n; x++) {
            for(int y=1; y<=n; y++) {
                b.at(x).at(y) = a.at(x).at(y);
            }
        }
    }
    cout << endl;
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=n; j++) {
            cout << a.at(i).at(j);
        }
        cout << endl;
    }
    return 0;
}