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
        vint p(n);
        for(int i=0; i<n; i++){
            cin >> p[i];
        }
        int l=-1, check=n;
        for(int i=0; i<n; i++){
            if(p[i]!=check){
                l=i;
                break;
            }
            else{
                check--;
            }
        }
        if(l==-1){
            for(auto i:p){
                cout << i << " ";
            }
            cout << endl;
        }
        else{
            int r=-1;
            for(int i=l+1; i<n; i++){
                if(p[i]==check){
                    r=i;
                    break;
                }
            }
            for(int i=0; i<l; i++){
                cout << p[i] << " ";
            }
            for(int i=r; i>=l; i--){
                cout << p[i] << " ";
            }
            for(int i=r+1; i<n; i++){
                cout << p[i] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}