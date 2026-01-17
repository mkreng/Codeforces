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
        if(a[n-2]>a[n-1]){
            cout << "-1\n";
        }
        else{
            bool ans=true;
            int m=0;
            vint idx;
            for(int i=n-3; i>=0; i--){
                if(a[i]>a[i+1]){
                    m++;
                    idx.push_back(i);
                    a[i]=a[i+1]-a[n-1];
                    if(a[i]>a[i+1]){
                        ans=false;
                        break;
                    }
                }
            }
            if(!ans){
                cout << "-1\n";
            }
            else{
                cout << m << endl;
                for(int i=0; i<idx.size(); i++){
                    cout << idx[i]+1 << " " << idx[i]+2 << " " << n << endl;
                }
            }
        }
    }
    return 0;
}