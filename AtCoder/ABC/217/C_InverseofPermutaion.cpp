#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> p(n), q(n);
    for(auto&x : p) cin >> x, --x; // 入れた値を1つ減らしている
    for(int i = 0; i < n; i++) q[p[i]] = i; // 1つ減っているからどこかで1足す
    for(int i = 0; i < n; i++) cout << q[i]+1 << " \n"[i == n-1]; // [true]→" \n"，[false]→" "
    return 0;
}