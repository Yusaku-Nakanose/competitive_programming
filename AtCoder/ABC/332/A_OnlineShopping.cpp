#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, s, k;
    cin >> n >> s >> k;
    vector<int> p(n), q(n);
    for (int i = 0; i < n; i++) {
        cin >> p[i] >> q[i];
    }

    int price = 0;
    for (int i = 0; i < n; i++) {
        price += p[i] * q[i];
    }
    if(price < s) cout << price + k << endl;
    else cout << price << endl;
    return 0;
}
