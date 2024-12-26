#include <iostream>
#include <vector>
#include <set>
#include <map>
using namespace std;

int main() {
    long long n, m;
    cin >> n >> m;
    vector<pair<int,int>> v(m);
    for(int i=0; i<m; i++) cin >> v[i].first >> v[i].second;

    set<pair<int,int>> st;
    for(int i=0; i<m; i++) {
        st.insert({v[i].first, v[i].second});
        if((1 <= v[i].first+2 && v[i].first+2 <= n) && (1 <= v[i].second+1 && v[i].second+1 <= n)) {
            st.insert({v[i].first+2, v[i].second+1});
        }
        if((1 <= v[i].first+1 && v[i].first+1 <= n) && (1 <= v[i].second+2 && v[i].second+2 <= n)) {
            st.insert({v[i].first+1, v[i].second+2});
        }
        if((1 <= v[i].first-1 && v[i].first-1 <= n) && (1 <= v[i].second+2 && v[i].second+2 <= n)) {
            st.insert({v[i].first-1, v[i].second+2});
        }
        if((1 <= v[i].first-2 && v[i].first-2 <= n) && (1 <= v[i].second+1 && v[i].second+1 <= n)) {
            st.insert({v[i].first-2, v[i].second+1});
        }
        if((1 <= v[i].first-2 && v[i].first-2 <= n) && (1 <= v[i].second-1 && v[i].second-1 <= n)) {
            st.insert({v[i].first-2, v[i].second-1});
        }
        if((1 <= v[i].first-1 && v[i].first-1 <= n) && (1 <= v[i].second-2 && v[i].second-2 <= n)) {
            st.insert({v[i].first-1, v[i].second-2});
        }
        if((1 <= v[i].first+1 && v[i].first+1 <= n) && (1 <= v[i].second-2 && v[i].second-2 <= n)) {
            st.insert({v[i].first+1, v[i].second-2});
        }
        if((1 <= v[i].first+2 && v[i].first+2 <= n) && (1 <= v[i].second-1 && v[i].second-1 <= n)) {
            st.insert({v[i].first+2, v[i].second-1});
        }
    }
    cout << n*n-st.size() << endl;
    return 0;
}