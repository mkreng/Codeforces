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
        vector<bool> even(n, false);
        for(int i=0; i<n; i++){
            cin >> a[i];
            if(a[i]%2==0){
                even[i]=1;
            }
        }
        int sum=a[0], maxEnding=a[0];
        bool segment_started=true;
        for(int i=1; i<n; i++){
            if(even[i]+even[i-1]==1){
                if(segment_started){
                    maxEnding=max(a[i], maxEnding+a[i]);
                }
                else{
                    maxEnding=a[i-1];
                    maxEnding=max(a[i], maxEnding+a[i]);
                    segment_started=true;
                }
                sum=max(sum, maxEnding);
            }
            else{
                segment_started=false;
            }
        }
        cout << max(sum, *max_element(a.begin(), a.end())) << endl;
    }
    return 0;
}