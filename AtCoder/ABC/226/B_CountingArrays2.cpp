#include <iostream>
#include <string>
#include <vector>
#include <set>
using namespace std;

int main() {
    int n;
    cin >> n;
    set<string> st;
    cin.ignore(); // 改行まで読み込む
    for(int i = 0; i < n; i++) { // 同じ数列→長さも要素も同じ
        string s;
        getline(cin, s);
        st.insert(s);
    }
    cout << st.size() << endl;
    return 0;
}