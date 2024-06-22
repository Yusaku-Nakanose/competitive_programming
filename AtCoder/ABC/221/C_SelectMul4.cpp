#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string n, a, b;
    cin >> n;
    sort(n.begin(), n.end(), greater<int>());
    for(int i = 0; i < n.size(); i+=2) a+=n[i];
    for(int i = 1; i < n.size(); i+=2) b+=n[i];
    
    // 2つの数の差が一番小さくなるように変える
    // 上の桁の値から見ていって，違うところで変える
    // デフォルトだとaのほうが桁も最初の数も大きい可能性が高い
    for(int i = 0; i < min(a.size(), b.size()); i++) {
        if(a[i] != b[i]) {
            swap(a[i], b[i]);
            break;
        }
    }

    cout << stoi(a)*stoi(b) << endl;
    return 0;
}