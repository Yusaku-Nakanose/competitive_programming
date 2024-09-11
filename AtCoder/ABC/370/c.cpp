#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

string singlereplace(string a, string b) {
    vector<string> tmp(a.size());
    for(int i=0; i<a.size(); i++) {
        if(a[i] == b[i]) {
            tmp[i] = "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz";
        }
        else {
            string c = a;
            c[i] = b[i];
            tmp[i] = c;
        }
    }
    sort(tmp.begin(), tmp.end());
    a = tmp[0];
    cout << a << endl;
    return a;
}

int main() {
    string s, t;
    cin >> s >> t;
    vector<string> x(s.size());
    int cnt = 0;
    for(int i=0; i<s.size(); i++) {
        if(s[i] != t[i]) cnt++;
    }
    cout << cnt << endl;
    vector<string> tmp(s.size());
    while(s!=t) {
        for(int i=0; i<s.size(); i++) {
            if(s[i] == t[i]) {
                tmp[i] = "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz";
            }
            else {
                string c = s;
                c[i] = t[i];
                tmp[i] = c;
            }
        }
        sort(tmp.begin(), tmp.end());
        s = tmp[0];
        cout << s << endl;
    }
    return 0;
}