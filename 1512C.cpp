#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vint vector<long long>
#define endl "\n"
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        int a, b;
        cin >> a >> b;
        string s;
        cin >> s;
        int x=0, y=s.size()-1;
        bool ans=true;
        while(x<y){
            if((s[x]=='1' && s[y]=='0') || (s[x]=='0' && s[y]=='1')){
                ans=false;
                break;
            }
            if(s[x]=='0' && s[y]=='0'){
                a-=2;
            }
            if(s[x]=='1' && s[y]=='1'){
                b-=2;
            }
            if(s[x]=='?' && s[y]!='?'){
                s[x]=s[y];
                if(s[y]=='0'){
                    a-=2;
                }
                else{
                    b-=2;
                }
            }
            if(s[x]!='?' && s[y]=='?'){
                s[y]=s[x];
                if(s[y]=='0'){
                    a-=2;
                }
                else{
                    b-=2;
                }
            }
            if(a<0 || b<0){
                ans=false;
                break;
            }
            x++;
            y--;
        }
        if(ans && x==y){
            if(s[x]=='0'){
                a--;
            }
            if(s[x]=='1'){
                b--;
            }
        }
        x=0;
        y=s.size()-1;
        while(ans && x<y){
            if(s[x]=='?' && s[y]=='?'){
                if(a>=2){
                    s[x]='0';
                    s[y]='0';
                    a-=2;
                }
                else if(b>=2){
                    s[x]='1';
                    s[y]='1';
                    b-=2;
                }
                else{
                    ans=false;
                    break;
                }
            }
            x++;
            y--;
        }
        if(x==y && s[x]=='?'){
            if(a>=1){
                s[x]='0';
                a--;
            }
            else if(b>=1){
                s[x]='1';
                b--;
            }
            else{
                ans=false;
            }
        }
        if(a!=0 || b!=0){
            ans=false;
        }
        if(ans){
            cout << s << endl;
        }
        else{
            cout << "-1\n";
        }
    }
    return 0;
}