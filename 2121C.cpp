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
        vector<vint> a(n, vint (m));
        int mx=INT_MIN;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cin >> a[i][j];
                mx=max(mx, a[i][j]);
            }
        }
        vint r, c;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(a[i][j]==mx){
                    r.push_back(i);
                    c.push_back(j);
                }
            }
        }
        if(r.size()==1 || r.size()==2){
            cout << mx-1 << endl;
        }
        else{
            bool cover1=true, cover2=true;
            int r1=r[0], c1, r2, c2=c[0], temp1, temp2;
            for(int i=0; i<r.size(); i++){
                if(r[i]!=r1){
                    c1=c[i];
                    temp1=i+1;
                    break;
                }
            }
            for(int i=0; i<r.size(); i++){
                if(c[i]!=c2){
                    r2=r[i];
                    temp2=i+1;
                    break;
                }
            }
            for(int i=temp1; i<r.size(); i++){
                if(!(r[i]==r1 || c[i]==c1)){
                    cover1=false;
                    break;
                }
            }
            for(int i=temp2; i<r.size(); i++){
                if(!(r[i]==r2 || c[i]==c2)){
                    cover2=false;
                    break;
                }
            }
            if(cover1+cover2){
                cout << mx-1 << endl;
            }
            else{
                cout << mx << endl;
            }
        }
    }
    return 0;
}