#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vint vector<long long>
#define endl "\n"
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    map<int, int> freq;
    for(int i=0; i<n; i++){
        int temp;
        cin >> temp;
        freq[temp]++;
    }
    int inserted=0;
    vint out;
    while(inserted<n){
        for(auto &i:freq){
            if(i.second>0){
                out.push_back(i.first);
                i.second--;
                inserted++;
            }
        }
    }
    int ans=0;
    for(int i=0; i<n-1; i++){
        if(out[i+1]>out[i]){
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}