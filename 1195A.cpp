#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vint vector<long long>
#define endl "\n"
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k;
    cin >> n >> k;
    unordered_map<int, int> freq;
    for(int i=0; i<n; i++){
        int temp;
        cin >> temp;
        freq[temp]++;
    }
    int ans=0, o=0;
    for(auto i=freq.begin(); i!=freq.end(); i++){
        if((i->second)%2){
            o++;
            ans--;
        }
        ans+=i->second;
    }
    ans+=(o+1)/2;
    cout << ans << endl;
    return 0;
}