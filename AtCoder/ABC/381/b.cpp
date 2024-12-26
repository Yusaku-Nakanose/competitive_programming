#include <iostream>
#include <map>

using namespace std;

int main() {
    string s;
    cin >> s;
    int n = s.size();
    if(n%2 == 1) {
        cout << "No" << endl;
        //return 0;
    }
    for(int i=0; i<n/2; i++) {
        if(s[2*i-1] != s[2*i]) {
            cout << "No" << endl;
            //return 0;
        }
    }
//    map<string, int> mp;
//    for(int i=0; i<n; i++) mp[s[i]]++;
//    for(int i=0; i<n; i++) {
//        if(mp[s[i]]%2 != 2) {
//            cout << "No" << endl;
//            return 0;
//        }
//    }
    cout << "Yes" << endl;
    return 0;
}