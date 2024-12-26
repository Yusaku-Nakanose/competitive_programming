#include <iostream>
#include <vector>

using namespace std;

void rle(string s, vector<pair<char, int>> &vec) {
    int cnt = 1;
    for(int i=1; i<(int)s.size(); i++) {
        if(s[i-1] != s[i]) {
            vec.push_back({s[i-1], cnt});
            cnt = 0;
        }
        cnt++;
    }
    vec.push_back({s.back(), cnt});
}

int main() {
    int n;
    string s;
    cin >> n >> s;

    vector<pair<char, int>> svec;
    rle(s, svec);
//    for(int i=0; i<(int)svec.size(); i++) cout << svec[i].first << " " << svec[i].second << endl;

    int ans = 1;
    for(int i=0; i<(int)svec.size()-2; i++) {
        if(svec[i].first=='1' && svec[i+1].first=='/' && svec[i+2].first=='2') {
            int m = min(svec[i].second, svec[i+2].second);
            ans = max(2*m+1, ans);
        }
    }
    cout << ans << endl;
    return 0;
}