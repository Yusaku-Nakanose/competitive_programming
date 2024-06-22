#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    string n;
    cin >> n;
    sort(n.begin(), n.end(), greater<int>()); // nを降順に

    int ans = 0;
    // ビット全探索
    for(int i = 0; i < (1<<n.size()); i++) { // n.size()は桁数
        int l = 0, r = 0;
        for(int j = 0; j < n.size(); j++) {
            // 1が立っている場合はlに，そうでない場合はrに振り分ける
            if(i & (1<<j)) {
                l = 10*l+n[j]-'0'; // 後ろ(小さい桁)に足していく，降順にしているからok
            }else {
                r = 10*r+n[j]-'0';
            }
        }
        ans = max(ans, l*r);
    }
    cout << ans << endl;
    return 0;
}