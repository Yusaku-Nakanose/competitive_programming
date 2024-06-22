#include <iostream>
#include <vector>

using namespace std;

int main() {
    int x;
    cin >> x;
    vector<int> a = {40, 70, 90};
    // 小さい値から見ていって，xより大きい最小のものを見つける
    for(int i = 0; i < 3; i++) {
        if(a[i] > x) {
            cout << a[i]-x << endl;
            return 0;
        }
    }
    cout << "expert" << endl; // 存在しない場合
    return 0;
}