#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vint vector<long long>
#define endl "\n"
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin >> s;
    bool ans=true;
    for(int i=1; i<s.size(); i++){
        if(s[i]>='a' && s[i]<='z'){
            ans=false;
            break;
        }
    }
    if(ans){
        for(int i=0; i<s.size(); i++){
            if(s[i]>='a' && s[i]<='z'){
                s[i]=s[i]-'a'+'A';
            }
            else{
                s[i]=s[i]-'A'+'a';
            }
        }
    }
    cout << s << endl;
    return 0;
}