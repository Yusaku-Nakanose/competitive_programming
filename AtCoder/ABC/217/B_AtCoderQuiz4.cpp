#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    char x[4] = {'B','G','H','R'};
    vector<char> s(9);
    for(int i = 0; i < 9; i++) cin >> s[i];
    bool exist[4]={};

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 4; j++) {
            if(s[1+3*i] == x[j]) { // i=1から3ずつ増やすでもok
                exist[j] = true; // iは入力される順で適当, jは決まっている
                break;
            }
        }
    }

    for(int i = 0; i < 4; i++) {
        if(!exist[i]) printf("A%cC", x[i]); 
    }
    return 0;
}