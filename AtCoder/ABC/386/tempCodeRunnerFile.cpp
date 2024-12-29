#include <iostream>
#include <map>
using namespace std;

int main() {
    int a,b,c,d;
    cin >>a>>b>>c>>d;
    if(a==b&&b==c&&c!=d) cout << "Yes" << endl;
    else if(b==c&&c==d&&d!=a) cout << "Yes" << endl;
    else if(c==d&&d==a&&a!=b) cout << "Yes" << endl;
    else if(d==a&&a==b&&b!=c) cout << "Yes" << endl;
    else if(a==b&&c==d&&a!=c) cout << "Yes" << endl;
    else if(a==c&&b==d&&a!=b) cout << "Yes" << endl;
    else if(a==d&&b==d&&a!=b) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}