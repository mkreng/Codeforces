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
        int n;
        cin >> n;
        string s;
        cin >> s;
        int five=0, tomakesix=LONG_LONG_MAX;
        for(int i=0; i+3<n; i++){
            if(s[i]=='2' && s[i+1]=='0' && s[i+2]=='2' && s[i+3]=='5'){
                five++;
            }
        }
        for(int i=0; i+3<n; i++){
            int temp=4;
            if(s[i]=='2'){
                temp--;
            }
            if(s[i+1]=='0'){
                temp--;
            }
            if(s[i+2]=='2'){
                temp--;
            }
            if(s[i+3]=='6'){
                temp--;
            }
            tomakesix=min(tomakesix, temp);
        }
        cout << min(five, tomakesix) << endl;
    }
    return 0;
}