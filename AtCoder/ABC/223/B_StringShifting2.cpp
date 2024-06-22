#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    string s;
    cin >> s;
    int n = s.size();
    vector<string> v(n); // 全パターンを入れる
    for(int i = 0; i < n; i++) {
        v[i] = s.substr(i, n-i) + s.substr(0, i); // sの後ろn-i文字+sの前i文字(右シフトi回)
    }
    cout << *min_element(v.begin(), v.end()) << endl; // イテレータを返すから*が必要
    cout << *max_element(v.begin(), v.end()) << endl;
    return 0;
}