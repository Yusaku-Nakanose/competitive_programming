#include <iostream>
using namespace std;

int main() {
    int s, t, x;
    cin >> s >> t >> x;
    if(t < s) t += 24; // sより後にtを持っていく
    if(x < s) x += 24;
    if(s <= x && x < t) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}