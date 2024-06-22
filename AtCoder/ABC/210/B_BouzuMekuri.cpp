#include <iostream>
#include <string>
using namespace std;

int main() {
    long long n;
    cin >> n;
    string s;
    cin >> s;

    int i = 0;
    bool check = true;
    while(check) {
        if(s.substr(i, 1) == "1") {
            check = false;
            break;
        }
        i++;
    }
    if(i % 2 == 0)  cout << "Takahashi" << endl;
    else            cout << "Aoki" << endl;
    return 0;
}