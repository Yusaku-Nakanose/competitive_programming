#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    
    for(int i = 1; i <= N; i++) {
        if(i%3 != 0) cout << "o";
        else cout << "x";
    }
    cout << endl;
    return 0;
}
