#include <iostream>
#include <string>
using namespace std;

int main() {
    string s,t;
    cin >> s >> t;
    int j=0,k=0;
    for(int i=0; i<s.size(); i++) {
        for(int j=k; j<t.size(); j++) {
            if(s[i] == t[j]){
                cout << j+1 << endl;
                k = j+1;
                break;
            }
        }
    }
    return 0;
}