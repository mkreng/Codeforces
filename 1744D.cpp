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
        int power2=0, evenin=0;
        for(int i=0; i<n; i++){
            while(a[i]%2==0){
                power2++;
                a[i]/=2;
            }
        }
        vint index(n, 0);
        for(int i=2; i<=n; i+=2){
            int ans=0, temp=i;
            while(temp%2==0){
                ans++;
                temp/=2;
            }
            index[i-1]=ans;
        }
        if(power2>=n){
            cout << "0\n";
        }
        else if(power2+accumulate(index.begin(), index.end(), 0LL)<n){
            cout << "-1\n";
        }
        else{
            sort(index.begin(), index.end(), greater<>());
            n-=power2;
            int j=0, ans=0;
            while(n>0){
                n-=index[j];
                j++;
                ans++;
            }
            cout << ans << endl;
        }
    }
    return 0;
}