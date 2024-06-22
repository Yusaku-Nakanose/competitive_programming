#include <iostream>
using namespace std;
int main()
{
    int N, ans;
    double floor(double x);
    cin >> N;
    ans = double(1.08*N);
    if(ans < 206){
        cout << "Yay!" << endl;
    }
    else if(ans > 206){
        cout << ":(" << endl;
    }
    else{
        cout << "so-so" << endl;
    }
    
}