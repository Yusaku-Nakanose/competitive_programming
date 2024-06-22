#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string n; cin >> n;
    sort(n.begin(), n.end());
    int ans = 0;

    do{
        for(int i = 1; i < n.size(); i++) {
            int l = 0, r = 0;
            for(int j = 0; j < i; j++) l = 10*l+(n[j]-'0'); // 先頭が0の時，次のループで消える
            for(int j = i; j < n.size(); j++) r = 10*r+(n[j]-'0');
            ans = max(ans, l*r);
        }
    }while(next_permutation(n.begin(), n.end()));
    
    cout << ans << endl;
    return 0;
}