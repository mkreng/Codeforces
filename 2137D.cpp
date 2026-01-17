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
        vint b(n);
        unordered_map<int, vint> pos;
        for(int i=0; i<n; i++){
            cin >> b[i];
            pos[b[i]].push_back(i);
        }
        bool ans=true;
        for(auto i:pos){
            if(i.second.size()%i.first!=0){
                ans=false;
                break;
            }
        }
        if(!ans){
            cout << "-1\n";
        }
        else{
            vint a(n);
            int toprint=1;
            for(auto i:pos){
                auto &index=i.second;
                for(int j=0; j<index.size(); j+=i.first){
                    for(int k=0; k<i.first; k++){
                        a[index[j+k]]=toprint;
                    }
                    toprint++;
                }
            }
            for(auto i:a){
                cout << i << " ";
            }
            cout << endl;
        }
    }
    return 0;
}