#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int n;
    cin >> n;
    vector<pair<int, int>> t(n);
    for(int i=0; i<n; i++){
        cin >> t[i].first >> t[i].second;
    }
    sort(t.begin(), t.end());
    int ans=1, temp=1;
    for(int i=0; i<n-1; i++){
        if(t[i].first!=t[i+1].first || t[i].second!=t[i+1].second){
            ans=max(ans, temp);
            temp=1;
        }
        if(t[i].first==t[i+1].first && t[i].second==t[i+1].second){
            temp++;
        }
        if(i==n-2 && t[i].first==t[i+1].first && t[i].second==t[i+1].second){
            ans=max(ans, temp);
        }
    }
    cout << ans << endl;
    return 0;
}