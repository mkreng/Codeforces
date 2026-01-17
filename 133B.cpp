#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vint vector<long long>
#define endl "\n"
int m=1000003;
int binpow(int b){
    if(b==0){
        return 1;
    }
    int res=binpow(b/2);
    if(b%2){
        return (((res%m)*(res%m)%m)*2)%m;
    }
    else{
        return (res%m)*(res%m)%m;
    }
}
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string p, s="";
    cin >> p;
    for(int i=0; i<p.size(); i++){
        if(p[i]=='>'){
            s+="1000";
        }
        if(p[i]=='<'){
            s+="1001";
        }
        if(p[i]=='+'){
            s+="1010";
        }
        if(p[i]=='-'){
            s+="1011";
        }
        if(p[i]=='.'){
            s+="1100";
        }
        if(p[i]==','){
            s+="1101";
        }
        if(p[i]=='['){
            s+="1110";
        }
        if(p[i]==']'){
            s+="1111";
        }
    }
    reverse(s.begin(), s.end());
    int ans=0;
    for(int i=0; i<s.size(); i++){
        if(s[i]=='1'){
            ans=((ans%m)+(binpow(i)%m))%m;
        }
    }
    cout << ans << endl;
    return 0;
}