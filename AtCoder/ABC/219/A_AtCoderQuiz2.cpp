#include<iostream>

using namespace std;

int main() {
    int x;
    cin >> x;
    // 逆に40以下の場合…でもおｋ
    if(x >= 90) cout << "expert" << endl;
    else if(x >= 70) cout << 90-x << endl;
    else if(x >= 40) cout << 70-x << endl;
    else cout << 40-x << endl;
    return 0;
}