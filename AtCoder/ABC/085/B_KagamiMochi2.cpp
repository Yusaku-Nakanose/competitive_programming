// std::set を用いた解
#include<iostream>
#include<set>
using namespace std;

int main() {
    int n;
    int d[110];
    cin >> n;
    for (int i = 0; i < n; i++) cin >> d[i];

    set<int> values; // insert するときに重複を取り除いてくれる
    for (int i = 0; i < n; i++) {
        values.insert(d[i]); // 挿入する
    }

    // set のサイズを出力する
    cout << values.size() << endl;
}