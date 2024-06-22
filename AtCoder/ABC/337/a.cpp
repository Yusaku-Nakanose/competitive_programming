#include <iostream>
using namespace std;

int main() {
    int n, x, y;
    cin >> n;
    int X = 0, Y = 0;
    for (int i = 0; i < n; i++) {
        cin >> x >> y;
        X += x, Y += y;
        cout << X << Y << endl;
    }
    cout << X << Y << endl;
    if(X > Y) cout << "Takahashi" << endl;
    else if(X < Y) cout << "Aoki" << endl;
    else cout << "Draw" << endl;
    return 0;
}
