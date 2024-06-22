#include <algorithm>
#include <cctype>
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string a, b;
    cin >> a >> b;
    transform(b.begin(), b.end(), b.begin(), ::tolower);
    if(b[2]=='x') {
        for(int i = 0; i < a.size(); i++) {
            if(a[i]==b[0]) {
                for(int j = i+1; j < a.size(); j++) {
                    if(a[j]==b[1]) {
                        cout << "Yes" << endl;
                        return 0;
                    }
                }
            }
        }
    } else {
        for(int i = 0; i < a.size(); i++) {
            if(a[i]==b[0]) {
                for(int j = i+1; j < a.size(); j++) {
                    if(a[j]==b[1]) {
                        for (int k = j+1; k < a.size(); k++){
                            cout << "Yes" << endl;
                            return 0;
                        }
                    }
                }
            }
        }
    }
    cout << "No" << endl;
    return 0;
}