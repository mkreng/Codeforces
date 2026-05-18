#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vint vector<long long>
// #define endl "\n"
string ask(int x){
    cout << x << endl;
    string ans;
    cin >> ans;
    return ans;
}
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vint p={2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47};
    int d=0, f=-1;
    for(int i=0; i<p.size(); i++){
        if(ask(p[i])=="yes"){
            d++;
            f=p[i];
        }
    }
    if(d>1 || (d==1 && f*f<=100 && ask(f*f)=="yes")){
        cout << "composite" << endl;
    }
    else{
        cout << "prime" << endl;
    }
    return 0;
}