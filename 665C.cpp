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
    for(int i=0; i<s.size()-1; i++){
        if(s[i]==s[i+1]){
            if(i!=s.size()-2){
                if(s[i]=='z'){
                    s[i+1]='y';
                    if(s[i+1]==s[i+2]){
                        s[i+1]--;
                    }
                }
                else{
                    s[i+1]++;
                    if(s[i+1]==s[i+2]){
                        if(s[i+1]=='z'){
                            s[i+1]='a';
                        }
                        else{
                            s[i+1]++;
                        }
                    }
                }
            }
            else{
                if(s[i+1]=='z'){
                    s[i+1]--;
                }
                else{
                    s[i+1]++;
                }
            }
        }
    }
    cout << s << endl;
    return 0;
}