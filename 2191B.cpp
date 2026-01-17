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
        int zero=0;
        vint a(n);
        for(int i=0; i<n; i++){
            cin >> a[i];
            if(a[i]==0){
                zero++;
            }
        }
        sort(a.begin(), a.end());
        int mex=0;
        for(int i=0; i<n; i++){
            if(a[i]!=mex){
                break;
            }
            while(i+1<n && a[i+1]==mex){
                i++;
            }
            mex++;
        }
        if(a[n-1]==mex){
            mex++;
        }
        if(mex==0 || (mex==1 && zero>1)){
            cout << "NO\n";
        }
        else{
            cout << "YES\n";
        }
    }
    return 0;
}