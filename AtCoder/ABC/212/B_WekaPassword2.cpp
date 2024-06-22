#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    bool same = true;
    bool step = true;
    for(int i = 0; i < 3; i++) {
        if(s[i] != s[i+1]) same = false;
        int a = s[i] - '0'; // s[i]を数字に変換, aとbのどちらのやり方でも大丈夫
        int b = stoi(s.substr(i+1,1)); // stoiは文字列を数字に変換
        if((a+1)%10 != b) step = false;
    }
    if(same || step) cout << "Weak" << endl;
    else cout << "Strong" << endl;
    return 0;
}