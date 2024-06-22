#include <iostream>
#include <string>
using namespace std;

int main() {
    int n, cnt=0;
    cin >> n;
    for(int i = 0; i < n; i++) {
        string s;
        cin >> s;
        if(s == "Takahashi") cnt++;
    }
    cout << cnt << endl;
    return 0;
}