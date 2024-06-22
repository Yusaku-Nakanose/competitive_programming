#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<string> s(4);
    for(int i = 0; i < 4; i++)  cin >> s[i];
    bool can = true;
    for(int i = 0; i < 4; i++) {
        for (int j = i + 1; j < 4; j++) {
            if(s[i] == s[j]){
                can = false;
                break;
            }
        }
    }
    if(can) cout << "Yes" << endl;
    else    cout << "No" << endl;
    return 0;
}