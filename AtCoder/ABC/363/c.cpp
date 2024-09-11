#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool palindrome(const string& s){
    return equal(s.begin(), s.end(), s.rbegin());
}

int main() {
    int n, k, cnt=0;
    string s;
    cin >> n >> k >> s;
    do{
        cout << s << endl;

    }while(next_permutation(s.begin(), s.end()));
    cout << cnt << endl;
    return 0;
}