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
        int n;
        cin >> n;
        vint a(n);
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        int type2=(2*a[0]-a[1])/(n+1), type1=type2-a[0]+a[1];
        bool ans=true;
        if(type1<0 || type2<0){
            ans=false;
        }
        else{
            for(int i=0; i<n; i++){
                a[i]-=type1*(i+1);
                a[i]-=type2*(n-i);
                if(a[i]!=0){
                    ans=false;
                    break;
                }
            }
        }
        if(ans){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }
    return 0;
}