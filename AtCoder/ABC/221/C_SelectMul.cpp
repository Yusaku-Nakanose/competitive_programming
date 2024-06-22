#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string n; // n.size()桁
    cin >> n;
    sort(n.begin(), n.end());
    int ans = 0;

    /* do-while文:処理を先に，条件を処理後に書く
    whileは0回の可能性もあるがdo-whilleは少なくとも1回はする*/
    do{
        for(int i = 1; i < n.size(); i++) { // iは分ける場所
            string l = "", r = "";
            for(int j = 0; j < i; j++) l += n[j]; // 後ろ(低い桁)に足されていく, nの前ののi桁
            for(int j = i; j < n.size(); j++) r += n[j]; // nの後ろのn.size()-i桁
            if(l[0]=='0' || r[0]=='0') continue; // leading zeroの場合，これ以下の処理を行わずi++, 
            ans = max(ans, stoi(l)*stoi(r));
        }
    }while(next_permutation(n.begin(), n.end())); // 次の順列が存在する場合はtrue, そうでなければfalse, 最初にソート→辞書順に全探索

    cout << ans << endl;
    return 0;
}