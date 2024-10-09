#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
    int m;
    cin >> m;
    int a=m;
    vector<int> ans(30);
    int i=0;
    while(a != 0) {
        ans[i] = int(log(a) / log(3));
        a-=pow(3, ans[i]);
        i++;
    }
    //for(int z=0; z<ans.size(); z++) cout << ans[z] << endl;
    int cnt=0;
    for(i=0; i<ans.size(); i++) {
        cnt += pow(3, ans[i]);
        if(cnt == m) {
            cout << i+1 << endl;
            break;
        }
    }
    for(int j=0; j<i+1; j++) cout << ans[j] << " ";
    return 0;
}