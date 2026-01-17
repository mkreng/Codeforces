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
    int ans=0;
    while(n--){
        int temp;
        cin >> temp;
        ans+=temp;
    }
    if(!ans){
        cout << "EASY\n";
    }
    else{
        cout << "HARD\n";
    }
    return 0;
}