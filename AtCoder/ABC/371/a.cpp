#include <iostream>
#include <string>

using namespace std;

int main() {
    char a, b, c;
    cin >> a >> b >> c;
    if(a=='>' && b=='>' && c=='>') cout << 'B' << endl;
    else if(a=='>' && b=='>' && c=='<') cout << 'C' << endl;
    else if(a=='>' && b=='<' && c=='<') cout << 'A' << endl;
    else if(a=='<' && b=='>' && c=='>') cout << 'A' << endl;
    else if(a=='<' && b=='<' && c=='>') cout << 'C' << endl;
    else if(a=='<' && b=='<' && c=='<') cout << 'B' << endl;
    return 0;
}