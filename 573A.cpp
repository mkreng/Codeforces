#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vint vector<long long>
#define endl "\n"
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vint a(n);
    for(int i=0; i<n; i++){
        cin >> a[i];
        while(a[i]%2==0){
            a[i]/=2;
        }
        while(a[i]%3==0){
            a[i]/=3;
        }
    }
    bool ans=true;
    for(int i=0; i<n-1; i++){
        if(a[i]!=a[i+1]){
            ans=false;
            break;
        }
    }
    if(ans){
        cout << "Yes\n";
    }
    else{
        cout << "No\n";
    }
    return 0;
}