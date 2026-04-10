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
        vint ans(n);
        ans[n-1]=1;
        if(n%2){
            ans[0]=n-1;
        }
        else{
            ans[0]=n;
        }
        int p=2;
        for(int i=2; i<n-1; i+=2){
            ans[i]=p;
            ans[i-1]=p+1;
            p+=2;
        }
        if(n%2){
            ans[n-2]=n;
        }
        for(auto i:ans){
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}