#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll s[4];
    for(int i=0; i<4; i++){
        cin >> s[i];
    }
    set<ll> unique;
    unique.insert(s, s+4);
    cout << 4-unique.size() << endl;
    return 0;
}