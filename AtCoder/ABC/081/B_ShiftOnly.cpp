#include <iostream>
using namespace std;
int main()
{
    int N;
    int A[200];
    int counter=0;
    cin >> N;
    for(int i=0; i<N; i++)  cin >> A[i];
    while(true){
        bool exist_odd=false;
        for(int i=0; i<N; i++){
            if(A[i]%2==1)   exist_odd=true;
        }

        if(exist_odd) break;

        for(int i=0; i<N; i++){
            A[i]/=2;
        }
        counter++;
    }
    cout << counter << endl;
}