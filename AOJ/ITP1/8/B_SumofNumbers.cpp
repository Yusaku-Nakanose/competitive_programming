#include <iostream>
using namespace std;

int main() {
    string x;
    while(true){
        cin >> x;
        if(x == "0") break;
        int ans = 0;
        for(int i = 0; i < x.size(); i++) {
            ans += x[i]-'0';
        }
        cout << ans << endl;
    }
    return 0;
}