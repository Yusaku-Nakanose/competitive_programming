#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    string s;
    cin >> s;
    int n = s.size();
    vector<vector<int>> dp(n + 1, vector<int>(9, 0));
    for(int i = 0; i < n+1; i++)    dp[i][0] = 1;
    const int mod = 1000000007;
    string t = "chokudai";
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < 8; j++) {
            if(s[i] != t[j]) {
                dp[i+1][j+1] = dp[i][j+1];
            } else {
                dp[i+1][j+1] = (dp[i][j+1] + dp[i][j]) % mod;
            }
        }    
    }
    cout << dp[n][8] <<endl;
    return 0;
}