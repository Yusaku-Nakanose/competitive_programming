#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    char suit[4] = {'S','H','C','D'};
    bool cards[4][13] = {};
    for(int i = 0; i < n; i++) {
        pair<char,int> card;
        cin >> card.first >> card.second;
        for(int j = 0; j < 4; j++) {
            if(card.first==suit[j]) cards[j][card.second-1] = true;
        }
    }

    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 13; j++) {
            if(!cards[i][j]) cout << suit[i] << " " << j+1 << endl;
        }
    }
    return 0;
}