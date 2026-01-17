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
        int ans=LONG_LONG_MIN, index=-1;
        for(int i=0; i<n; i++){
            if(i==0){
                int diff=abs(a[0]-a[1]);
                if(diff>ans){
                    ans=diff;
                }                
            }
            else if(i==n-1){
                int diff=abs(a[n-2]-a[n-1]);
                if(diff>ans){
                    ans=diff;
                }                
            }
            else{
                int diff=(abs(a[i]-a[i-1])+abs(a[i+1]-a[i]))-abs(a[i+1]-a[i-1]);
                if(diff>ans){
                    ans=diff;
                }
            }
        }
        int time=0;
        for(int i=0; i<n-1; i++){
            time+=abs(a[i]-a[i+1]);
        }
        time-=ans;
        cout << time << endl;
    }
    return 0;
}