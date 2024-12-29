#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;
    int i=1, cnt=0;
    while(i<s.size()) {
        if(s[i]=='0' && s[i+1]=='0') {
            s.erase(i,2);
            cnt++;
            continue;
        }
        i++;
    }
    cout << cnt+s.size() << endl;
    return 0;
}