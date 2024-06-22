#include<iostream>
using namespace std;
int main()
{
    int counter=0, N, day=0;
    cin >> N;
    while(counter < N){
        day++;
        for(int i=0; i<day; i++){
            counter++;
        }
    }
    cout << day << endl;
}
