#include <iostream>
#include <algorithm>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<tuple<int, int, int>> v(n);
    vector<tuple<int, int, int, int>> w(n), ans(n);
    for(int i=0; i<n; i++) {
        int a, c;
        cin >> a >> c;
        v.at(i) = make_tuple(a, c, i);
    }
    
    sort(v.begin(), v.end());
    
    for(int i=0; i<n; i++) {
        w.at(i) = make_tuple(get<1>(v[i]), get<0>(v[i]), get<2>(v[i]), i); // 
    }

    sort(w.begin(), w.end());

    for(int i=0; i-1<n; i++) {
        if(get<3>(w[i]) < get<3>(w[i+1])) w.erase(w.begin()+i+1);
    }

    for(int i=0; i<n; i++) {
        ans.at(i) = make_tuple(get<3>(w[i]), get<0>(w[i]), get<2>(w[i]), get<2>(w[i]));
    }

    for(int i=0; i<w.size(); i++) {
        cout << get<0>(w[i]) << endl;
}