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
    string s;
    cin >> s;
    int p=0;
    while(p<n && s[p]=='.'){
        p++;
    }
    if(p==n){
        cout << n << endl;
    }
    else{
        int ans=0, prev=-1;
        while(p<n){
            if(p<n && s[p]=='R'){
                if(prev==-1){
                    ans+=p;
                }
                else{
                    ans+=p-prev-1;
                }
                prev=p;
                while(p<n && s[p]!='L'){
                    p++;
                }
            }
            if(p<n && s[p]=='L'){
                if(prev!=-1 && (p-prev)%2==0){
                    ans++;
                }
                prev=p;
                while(p<n && s[p]!='R'){
                    p++;
                }
                if(p==n){
                    ans+=n-prev-1;
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}