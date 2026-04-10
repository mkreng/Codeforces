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
        int n, k, p, m;
        cin >> n >> k >> p >> m;
        vint a(n);
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        int ap=a[p-1];
        sort(a.begin(), a.begin()+p-1);
        int s1=0;
        for(int i=0; i<p-k; i++){
            s1+=a[i];
        }
        vint b;
        for(int i=0; i<n; i++){
            if(i!=p-1){
                b.push_back(a[i]);
            }
        }
        sort(b.begin(), b.end());
        int s2=0;
        for(int i=0; i<n-k; i++){
            s2+=b[i];
        }
        int ans=0;
        m-=s1;
        if(m<ap){
            cout << "0\n";
        }
        else{
            ans+=m/(ap+s2);
            m-=(m/(ap+s2))*(ap+s2);
            if(m>=ap){
                ans++;
            }
            cout << ans << endl;
        }
    }
    return 0;
}