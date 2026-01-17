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
        int n, x, k;
        cin >> n >> x >> k;
        string s;
        cin >> s;
        int displacement=0, zero_reached_time=-1, zero_displacement_time=-1;
        bool zero_reached=false, zero_displacement=false;
        for(int i=0; i<n; i++){
            if(s[i]=='L'){
                displacement--;
            }
            else{
                displacement++;
            }
            if(displacement==0){
                zero_displacement=true;
                if(zero_displacement_time==-1){
                    zero_displacement_time=i+1;
                }
            }
            if(displacement==-x){
                zero_reached=true;
                if(zero_reached_time==-1){
                    zero_reached_time=i+1;
                }
            }
        }
        int ans=0;
        if(zero_reached && zero_reached_time<=k){
            if(!zero_displacement){
                ans=1;
            }
            if(zero_displacement){
                int time=k-zero_reached_time;
                ans=time/zero_displacement_time+1;
            }
        }
        cout << ans << endl;
    }
    return 0;
}