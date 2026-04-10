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
        int mx=INT64_MIN, mxa=-1;
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        int k=-1;
        for(int i=0; i<n-1; i++){
            if(a[i]==a[i+1]){
                k=i+1;
            }
        }
        if(k==-1){
            cout << "-1\n";
        }
        else{
            int c=a[k];
            a.erase(a.begin()+k);
            a.erase(a.begin()+k-1);
            bool ans=0;
            for(int i=0; i<a.size()-1; i++){
                if(a[i+1]-a[i]<2*c){
                    ans=1;
                    cout << c << " " << c << " " << a[i] << " " << a[i+1] << endl;
                    break;
                }
            }
            if(!ans){
                cout << "-1\n";
            }
        }
    }
    return 0;
}