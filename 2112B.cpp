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
        bool beautiful=false, ans=false;
        for(int i=0; i<n-1; i++){
            if(abs(a[i]-a[i+1])<=1){
                beautiful=true;
                break;
            }
            if(i!=n-2 && a[i+2]>=min(a[i], a[i+1])-1 && a[i+2]<=max(a[i], a[i+1])+1){
                ans=true;
            }
            if(i!=0 && a[i-1]>=min(a[i], a[i+1])-1 && a[i-1]<=max(a[i], a[i+1])+1){
                ans=true;
            }
        }
        if(beautiful){
            cout << "0\n";
        }
        else if(ans){
            cout << "1\n";
        }
        else{
            cout << "-1\n";
        }
    }
    return 0;
}