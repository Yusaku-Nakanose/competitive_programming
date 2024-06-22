#include <iostream>
#include <map>
using namespace std;

int main() {
    string s;
    cin >> s;
    map<char, int> mp;
    for (int i = 0; i < s.size(); i++) mp[s[i]]++;
    int cnt = 0;
    bool flag = false;
    auto begin = mp.begin(), end = mp.end();
    for (auto iter = begin; iter != end; iter++) {
        if(iter->second >= 2) flag = true;
        cnt += iter->second*(iter->second-1)/2;
    }
    if(flag) cnt -= 1;
    cout << s.size()*(s.size()-1)/2 - cnt << endl;
    return 0;
}
