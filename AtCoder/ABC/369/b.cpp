#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    int n, cnt=0;
    cin >> n;
    vector<int> l(0), r(0);
    for(int i=0; i<n; i++) {
        int a;
        char s;
        cin >> a >> s;
        if(s == 'L') l.push_back(a);
        else r.push_back(a);
    }
    if(l.size() > 0) {
        for(int i=0; i<l.size()-1; i++) cnt += abs(l[i+1]-l[i]);
    }
    if(r.size() > 0) {
        for(int i=0; i<r.size()-1; i++) cnt += abs(r[i+1]-r[i]);
    }
    cout << cnt << endl;
    return 0;
}