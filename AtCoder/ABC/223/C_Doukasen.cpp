#include <stdio.h>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<double> a(n), b(n);
    for(int i = 0; i < n; i++) cin >> a[i] >> b[i];
    double alltime = 0;
    for(int i = 0; i < n; i++) {
        alltime += a[i]/b[i];
    }
    double halftime = 0;
    int i = 0;
    while(true) {
        if(halftime >= alltime/2) break;
        halftime += a[i]/b[i];
        i++;
    }
    halftime -= a[i-1]/b[i-1];
    int l = 0;
    for(int j = 0; j < i-1; j++) l += a[j];
    printf("%.10lf", l+(alltime/2-halftime)*b[i-1]);
    return 0;
}