#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vint vector<long long>
#define endl "\n"
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string a, b;
    cin >> a >> b;
    unordered_map<char, int> have;
    unordered_map<char, int> need;
    for(int i=0; i<a.size(); i++){
        have[a[i]]++;
    }
    for(int i=0; i<b.size(); i++){
        need[b[i]]++;
    }
    bool ans=true;
    int out=0;
    for(auto i:need){
        int temp=min(i.second, have[i.first]);
        if(temp==0){
            ans=false;
            break;
        }
        out+=temp;
    }
    if(ans){
        cout << out << endl; 
    }
    else{
        cout << "-1\n";
    }
    return 0;
}