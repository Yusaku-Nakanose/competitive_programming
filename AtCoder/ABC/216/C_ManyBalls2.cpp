#include <iostream>
#include <string>
#include <bitset>

using namespace std;

int main() { // 最初にBがついていても問題ない(0を2倍するだけ)
    long long n;
    cin >> n;
    const long long len = 60;
    auto a = bitset<len>(n); // サイズ60のnを表すビット配列(10^18<2^60よりサイズ60でok) auto:型推論
    string ans(len,'B'); // 文字数60，すべての要素を'B'で初期化

    // ansの左からans.size()-i文字目に"A"を挿入(a[i]が1のとき2^iが1→後ろにBがi個あるところにAがある)
    for(long long i = len-1; i >= 0; i--) {
        if(a[i] == 1) {
            ans.insert(ans.size()-i, "A"); // 上から埋めていくことでわざわざBの数を数えなくていい(Aが入らないようにしている)
        }
    
    }
    cout << ans << endl;
    return 0;
}