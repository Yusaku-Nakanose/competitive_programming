#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    cin >> s;
    
    int n = s.size();
    int y = s[n-1]-'0'; // sの最後の数字を1桁の整数値へ変換

    s = s.substr(0,n-2); // 末尾2文字を削除したs

    if(y <= 2) {
        s += '-';
    }else if(y >= 7) { // elseにするとy>=3に関して+がついてしまう
        s += '+';
    }

    cout << s << endl;
    return 0;
}