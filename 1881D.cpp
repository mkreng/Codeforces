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
        unordered_map<int, int> pf;
        for(auto &i:a){
            cin >> i;
            while(i%2==0){
                pf[2]++;
                i/=2;
            }
            for(int j=3; j*j<=i; j+=2){
                while(i%j==0){
                    pf[j]++;
                    i/=j;
                }
            }
            if(i>2){
                pf[i]++;
            }
        }
        bool ans=1;
        for(auto i:pf){
            if(i.second%n){
                ans=0;
                break;
            }
        }
        if(ans){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }
    return 0;
}