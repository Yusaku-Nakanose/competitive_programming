#include <iostream>
#include <set>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    set<vector<int>> st;
    for(int i = 0; i < n; i++)  {
        int l;
        cin >> l;
        vector<int> v(l);
        for(auto& x : v) cin >> x;
        st.insert(v);
    }
    cout << st.size() << endl;
    return 0;
}