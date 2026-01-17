#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vint vector<long long>
#define endl "\n"
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        int a, b, c;
        cin >> a >> b >> c;
        bool shop1=false, shop2=false;
        if(a<c){
            shop1=true;
        }
        if(a*b>c){
            shop2=true;
        }
        if(shop1){
            cout << "1 ";
        }
        else{
            cout << "-1 ";
        }
        if(shop2){
            cout << b;
        }
        else{
            cout << "-1";
        }
        cout << endl;
    }
    return 0;
}