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
        vector<bool> present(1010, false);
        int distinct=0;
        for(int i=0; i<n; i++){
            int temp;
            cin >> temp;
            if(!present[temp]){
                present[temp]=true;
                distinct++;
            }
        }
        while(1){
            if(present[distinct]){
                cout << distinct << endl;
                break;
            }
            else{
                present[distinct]=true;
                distinct++;
            }
        }
    }
    return 0;
}