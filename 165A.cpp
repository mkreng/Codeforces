#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int n;
    cin >> n;
    vector<pair<int, int>> a;
    for(int i=0; i<n; i++){
        int x, y;
        cin >> x >> y;
        a.push_back({x, y});
    }
    int ans=0;
    for(int i=0; i<n; i++){
        bool l=0, r=0, u=0, d=0;
        for(int j=0; j<n; j++){
            if(a[j].first<a[i].first && a[i].second==a[j].second){
                l=1;
            } 
            if(a[j].first>a[i].first && a[i].second==a[j].second){
                r=1;
            }
            if(a[j].second<a[i].second && a[i].first==a[j].first){
                d=1;
            } 
            if(a[j].second>a[i].second && a[i].first==a[j].first){
                u=1;
            }
        }
        if(l==1 && r==1 && u==1 && d==1){
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}