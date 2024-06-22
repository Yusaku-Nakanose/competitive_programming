#include <iostream>
using namespace std;

int main() {
    int K, G, M;
    cin >> K >> G >> M;
    
    int g = 0, m = 0;

    while(K){
        if(g == G) {
            g = 0; 
        }else if(m == 0) {
            m = M; 
        }else if(m < G-g) {
            g += m;
            m = 0;
        }else {
            m = m-G+g;
            g = G;
        }
        K--;
    }
    cout << g << " " << m << endl;
    return 0;
}
