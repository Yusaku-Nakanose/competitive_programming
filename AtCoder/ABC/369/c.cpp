#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int &i: a) cin >> i;
    int pre = 0, cnt = 0;
    for(int i=1; i<n-1; i++) {
        if(a[i]-a[i-1] != a[i+1]-a[i]) {
            cnt += 
        }
    }
}