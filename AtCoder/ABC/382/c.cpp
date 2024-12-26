#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<pair<int, int>> a(n);
    vector<int> b(m);
    for(int i=0; i<n; i++) {
        cin >> a[i].first;
        a[i].second = i;
    }
    for(int i=0; i<m; i++) cin >> b[i];

    sort(a.begin(), a.end());

    vector<int> min_so_far(n);
    min_so_far[0] = a[0].second;
    for(int i=1; i<n; i++) {
        min_so_far[i] = min(min_so_far[i-1], a[i].second);
    }

    for(int i=0; i<m; i++) {
        if(a[0].first > b[i]) {
            cout << -1 << endl;
            continue;
        }
        
        int ok=0, ng=n;
        while(abs(ok-ng) > 1) {
            int mid = (ok+ng)/2;
            if(b[i] < a[mid].first) { //a[mid]より左
                ng = mid;
            } 
            else {
                ok = mid;
            }
        }

        cout << min_so_far[ok]+1 << endl;
    }
    return 0;
}