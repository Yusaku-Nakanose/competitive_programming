#include <iostream>
using namespace std;
int main()
{
    int s, ans=0;
    cin >> s;
    while(s > 0) {
        if(s % 10 == 1) ans++;
        s /= 10;
    }
    cout << ans << endl;
}