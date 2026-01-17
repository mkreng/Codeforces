#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int n;
    cin >> n;
    vector<string> s;
    for(int i=0; i<n; i++){
        string temp;
        cin >> temp;
        s.push_back(temp);
    }
    unordered_map<string, int> f;
    for(int i=0; i<s.size(); i++){
        f[s[i]]++;
    }
    int mx=0;
    string ans;
    for(auto &i : f){
        if(i.second>mx){
            ans=i.first;
            mx=i.second;
        }
    }
    cout << ans << endl;
    return 0;
}