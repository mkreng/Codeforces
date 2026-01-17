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
    }
    bool ans=true;
    int mx=*max_element(a.begin(), a.end()), mn=*min_element(a.begin(), a.end());
    if((mx-mn)%2==0){
        int x=(mx+mn)/2;
        for(int i=0; i<n; i++){
            if(!(a[i]==mx || a[i]==mn || a[i]==x)){
                ans=false;
                break;
            }
        }
    }
    else{
        for(int i=0; i<n; i++){
            if(!(a[i]==mx || a[i]==mn)){
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
    return 0;
}