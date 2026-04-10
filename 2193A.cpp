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
        int n, s, x;
        cin >> n >> s >> x;
        int sum=0;
        for(int i=0; i<n; i++){
            int temp;
            cin >> temp;
            sum+=temp;
        }
        if(sum>s){
            cout << "NO\n";
        }
        else{
            if((s-sum)%x){
                cout << "NO\n";
            }
            else{
                cout << "YES\n";
            }
        }
    }
    return 0;
}