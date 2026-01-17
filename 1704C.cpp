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
        int n, m;
        cin >> n >> m;
        vint a(m);
        for(int i=0; i<m; i++){
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        vint gaps;
        for(int i=0; i<m-1; i++){
            gaps.push_back(a[i+1]-a[i]-1);
        }
        gaps.push_back(n-a[m-1]+a[0]-1);
        sort(gaps.begin(), gaps.end(), greater<>());
        int ans=0, time=0;
        for(int i=0; i<m; i++){
            if(gaps[i]-2*time==1 || gaps[i]-2*time==2){
                ans++;
                time++;
            }
            else if(gaps[i]-2*time>2){
                ans+=gaps[i]-2*time-1;
                time+=2;
            }
        }
        cout << n-ans << endl;
    }
    return 0;
}