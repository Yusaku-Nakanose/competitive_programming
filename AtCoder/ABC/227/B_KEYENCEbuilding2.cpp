#include <iostream>
#include <set>
using namespace std;

int main() {
    int n, ans = 0;
    cin >> n;
    set<int> st;
    for(int a = 1; a <= 200; a++) { // 200は1000/7を上から評価
        for(int b = 1; b <= 200; b++) {
            int s = a*3+a*b*4+b*3;
            st.insert(s);
        }
    }
    for(int i = 0; i < n; i++) {
        int s;
        cin >> s;
        if(st.count(s) == 0) ans++; // setに重複はない→要素があれば1，なければ0
    }
    cout << ans << endl;
    return 0;
}