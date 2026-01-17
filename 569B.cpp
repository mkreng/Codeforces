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
    vector<pair<int, bool>> a(n);
    for(int i=0; i<n; i++){
        int temp;
        cin >> temp;
        a[i].first=temp;
        a[i].second=false;
    }
    unordered_set<int> s;
    vector<bool> used(n+1, false);
    for(int i=0; i<n; i++){
        if(a[i].first>=1 && a[i].first<=n && s.find(a[i].first)==s.end()){
            a[i].second=true;
            s.insert(a[i].first);
            used[a[i].first]=true;
        }
    }
    int j=1;
    for(int i=0; i<n; i++){
        if(a[i].second==false){
            while(used[j]!=false){
                j++;
            }
            a[i].first=j;
            used[j]=true;
        }
    }
    for(int i=0; i<n; i++){
        cout << a[i].first << " ";
    }
    cout << endl;
    return 0;
}