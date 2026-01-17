#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    string guest, residence, pile;
    cin >> guest >> residence >> pile;
    string temp=guest+residence;
    sort(temp.begin(), temp.end());
    sort(pile.begin(), pile.end());
    if(temp==pile){
        cout << "YES\n";
    }
    else{
        cout << "NO\n";
    }
    return 0;
}