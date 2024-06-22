#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    int n = 3;
    vector<string> s(n);
    for(int i = 0; i < n; i++) cin >> s[i];
    
    for(string x : {"ABC", "AGC", "AHC", "ARC"}) {
        bool exist = false;
        for(int i = 0; i < n; i++) {
            if(s[i] == x) exist = true;
        }
        if(!exist) cout << x << endl;
    }
    return 0;
}