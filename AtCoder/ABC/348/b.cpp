#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> x(n);
    vector<int> y(n);
    int ans = 0;

    for (int i = 0; i < n; i++) {
        cin >> x[i] >> y[i];
    }
    
    for(int i = 0; i < n; i++) {
        int max = 0;
        for(int j = 0; j < n; j++) {
            //cout << max << " " << pow(x[i]-x[j],2)+pow(y[i]-y[j],2) << endl;
            if(max < pow(x[i]-x[j],2)+pow(y[i]-y[j],2)) {
                ans = j;
                max = pow(x[i]-x[j],2)+pow(y[i]-y[j],2);
            }
        }
        cout << ans+1 << endl;
    }

    return 0;
}
