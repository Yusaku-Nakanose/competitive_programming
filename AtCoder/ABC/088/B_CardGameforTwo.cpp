#include<iostream>
#include<algorithm>
using namespace std;

int main() {
    int n;
    int a[110];
    cin >> n;;
    for(int i = 0; i < n; i++)  cin >> a[i];

    sort(a, a + n, greater<int>());
    int Alice = 0;
    int Bob = 0;
    for(int i = 0; i < n; i++) {
        if(i % 2 == 0) { // Aliceのターン
            Alice += a[i];
        }
        else { // Bobのターン
            Bob += a[i];
        }
    }
    cout << Alice - Bob << endl;
}