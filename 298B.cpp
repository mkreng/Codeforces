#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll t, sx, sy, ex, ey;
    cin >> t >> sx >> sy >> ex >> ey;
    string s;
    cin >> s;
    ll eorw=abs(ex-sx), nors=abs(ey-sy);
    ll time=0;
    for(int i=0; i<s.size(); i++){
        if(eorw<=0 && nors<=0){
            break;
        }
        if(ex>sx && s[i]=='E'){
            eorw--;
        }
        if(ex<sx && s[i]=='W'){
            eorw--;
        }
        if(ey>sy && s[i]=='N'){
            nors--;
        }
        if(ey<sy && s[i]=='S'){
            nors--;
        }
        time++;
    }
    if(eorw>0 || nors>0){
        cout << "-1\n";
    }
    else{
        cout << time << endl;
    }
    return 0;
}