#include <iostream>
using namespace std;

int main() {
    int s, t, x;
    cin >> s >> t >> x;
    // 三項演算子の'?', 条件? 処理1: 処理2　条件が真→処理1，偽→処理2
    if(s < t) cout << (s <= x and x < t ? "Yes" : "No") << endl;
    else cout << (x < t or s <= x ? "Yes" : "No") << endl;
    return 0;
}