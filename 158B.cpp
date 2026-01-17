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
    vint s(n);
    int one=0, two=0, three=0, four=0;
    for(int i=0; i<n; i++){
        cin >> s[i];
        if(s[i]==1){
            one++;
        }
        else if(s[i]==2){
            two++;
        }
        else if(s[i]==3){
            three++;
        }
        else{
            four++;
        }
    }
    int ans=four;
    ans+=three;
    one-=min(one, three);
    ans+=two/2;
    if(two%2==1){
        ans++;
        one-=min(one, 2LL);
        if(one!=0){
            ans+=one/4;
            if(one%4!=0){
                ans++;
            }
        }
    }
    else{
        ans+=one/4;
        if(one%4!=0){
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}