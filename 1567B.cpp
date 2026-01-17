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
        int a, b;
        cin >> a >> b;
        int x=0;
        if(a%4==1){
            x=a-1;
        }
        else if(a%4==2){
            x=1;
        }
        else if(a%4==3){
            x=a;
        }
        if(x==b){
            cout << a << endl;
        }
        else if((x^b)!=a){
            cout << a+1 << endl;
        }
        else{
            cout << a+2 << endl;
        }
    }
    return 0;
}