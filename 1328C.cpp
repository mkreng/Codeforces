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
        string a="", b="";
        bool o=0;
        for(int i=0; i<n; i++){
            if(o){
                a+="0";
                b+=s[i];
            }
            else{
                if(s[i]=='0'){
                    a+="0";
                    b+="0";
                }
                if(s[i]=='2'){
                    a+="1";
                    b+="1";
                }
                if(s[i]=='1'){
                    o=1;
                    a+="1";
                    b+="0";
                }
            }
        }
        cout << a << endl << b << endl;
    }
    return 0;
}