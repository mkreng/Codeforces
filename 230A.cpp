#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int n, s;
    cin >> s >> n;
    vector<pair<int, int>> a;
    for(int i=0; i<n; i++){
        int x, y;
        cin >> x >> y;
        a.push_back({x, y});
    }
    sort(a.begin(), a.end());
    for(auto &i : a){
        if(i.first<s){
            s+=i.second;
        }
        else{
            cout << "NO\n";
            return 0;
        }
    }
    cout << "YES\n";
    return 0;
}