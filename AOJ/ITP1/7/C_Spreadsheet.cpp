#include <iostream>
#include <vector>
using namespace std;

int main() {
    int r, c;
    cin >> r >> c;
    vector< vector<int> > table(r+1, vector<int>(c+1));
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) cin >> table.at(i).at(j);
    }
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            table.at(i).at(c) += table.at(i).at(j);
        }
    }
    for(int i = 0; i < c+1; i++) {
        for(int j = 0; j < r; j++) {
            table.at(r).at(i) += table.at(j).at(i);
        }
    }
    for(int i = 0; i < r+1; i++) {
        for(int j = 0; j < c+1; j++) {
            cout << table.at(i).at(j) << " \n"[j==c];
        }
    }
    return 0;
}