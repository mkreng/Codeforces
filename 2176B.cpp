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
        int max_len=-1;
        int first_one=0, last_one=n-1;
        while(s[first_one]!='1'){
            first_one++;
        }
        while(s[last_one]!='1'){
            last_one--;
        }
        for(int i=first_one+1; i<=last_one; i++){
            if(s[i]=='0'){
                int len=1;
                while(s[i+len]!='1'){
                    len++;
                }
                max_len=max(max_len, len);
                i+=len-1;
            }
        }
        max_len=max(max_len, first_one+n-last_one-1);
        cout << max_len << endl;
    }
    return 0;
}