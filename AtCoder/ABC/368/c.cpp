#include <iostream>
#include <queue>

using namespace std;

int main() {
    int n;
    long long t=0, num=0;
    cin >> n;
    queue<int> h;
    for(int i=0; i<n; i++) {
        int tmp;
        cin >> tmp;
        num += 3*(tmp/5);
        tmp = tmp%5;
        if(tmp != 0) h.push(tmp);
    }
    while(!h.empty()) {
        int current = h.front();
        h.pop();
        while(current > 0) {
            t++;
            if(t%3 != 0) current--;
            else current -= 3;
        }
    }
    cout << t+num << endl;
    return 0;
}