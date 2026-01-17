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
        bool allsame=true;
        for(int i=0; i<n; i++){
            cin >> a[i];
            if(i!=0 && a[i]!=a[0]){
                allsame=false;
            }
        }
        if(allsame){
            cout << "NO\n";
        }
        else{
            cout << "YES\n";
            int idx=-1;
            vint first;
            for(int i=1; i<n; i++){
                if(a[i]==a[0]){
                    first.push_back(i);
                }
                else{
                    cout << "1 " << i+1 << endl;
                    idx=i;
                }
            }
            for(int i=0; i<first.size(); i++){
                cout << idx+1 << " " << first[i]+1 << endl;
            }
        }
    }
    return 0;
}