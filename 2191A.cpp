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
        vector<pair<int, int>> r, b;
        for(int i=0; i<n; i++){
            int temp;
            cin >> temp;
            if(i%2==0){
                r.push_back({temp, 1});
                b.push_back({temp, 0});
            }
            else{
                b.push_back({temp, 1});
                r.push_back({temp, 0});
            }
        }
        sort(r.begin(), r.end());
        sort(b.begin(), b.end());
        bool ansr=true, ansb=true;
        for(int i=0; i<n-1; i++){
            if(r[i].second==r[i+1].second){
                ansr=false;
                break;
            }
        }
        for(int i=0; i<n-1; i++){
            if(b[i].second==b[i+1].second){
                ansb=false;
                break;
            }
        }
        if(ansr==false && ansb==false){
            cout << "NO\n";
        }
        else{
            cout << "YES\n";
        }
    }
    return 0;
}