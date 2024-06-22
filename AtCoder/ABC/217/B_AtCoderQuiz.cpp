#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    vector<string> s(3);
    for(int i = 0; i < 3; i++) cin >> s[i];
    bool flag_abc = true;
    bool flag_arc = true;
    bool flag_agc = true;
    bool flag_ahc = true;

    for(int i = 0; i < 3; i++) {
        if(s[i] == "ABC") flag_abc = false;
        if(s[i] == "ARC") flag_arc = false;
        if(s[i] == "AGC") flag_agc = false;
        if(s[i] == "AHC") flag_ahc = false;
    }
    
    if(flag_abc) cout << "ABC" << endl;
    if(flag_arc) cout << "ARC" << endl;
    if(flag_agc) cout << "AGC" << endl;
    if(flag_ahc) cout << "AHC" << endl;
    return 0;
}