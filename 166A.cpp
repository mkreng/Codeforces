#include <bits/stdc++.h>
using namespace std;
#define ll long long
bool cmp(pair<int, int> &a, pair<int, int> &b){
    if(a.first!=b.first){
        return a.first>b.first;
    }
    return b.second>a.second;
}
int main(){
    int n, k;
    cin >> n >> k;
    vector<pair<int, int>> team(n);
    for(int i=0; i<n; i++){
        cin >> team[i].first >> team[i].second;
    }
    sort(team.begin(), team.end(), cmp);
    int ans=0, i=k-1;
    while(i>=0 && team[i].first==team[k-1].first && team[i].second==team[k-1].second){
        ans++;
        i--;
    }
    i=k;
    while(i<n && team[i].first==team[k-1].first && team[i].second==team[k-1].second){
        ans++;
        i++;
    }
    cout << ans << endl;
    return 0;
}