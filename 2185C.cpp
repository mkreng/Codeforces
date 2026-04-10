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
        set<int> seta;
        for(int i=0; i<n; i++){
            int temp;
            cin >> temp;
            seta.insert(temp);
        }
        vint a;
        for(auto i=seta.begin(); i!=seta.end(); i++){
            a.push_back(*i);
        }        
        int maxlen=1;
        for(int i=0; i<a.size(); i++){
            int len=1;
            while(i+1<a.size() && a[i+1]==a[i]+1){
                i++;
                len++;
            }
            maxlen=max(maxlen, len);
        }
        cout << maxlen << endl;
    }
    return 0;
}