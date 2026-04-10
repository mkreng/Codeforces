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
        string s;
        cin >> s;
        int first=-1, last=-1, one=0;
        for(int i=0; i<s.size(); i++){
            if(s[i]=='1'){
                last=i;
                if(first==-1){
                    first=i;
                }
                one++;
            }
        }
        if(first==-1){
            cout << "0\n";
        }
        else{
            cout << last-first+1-one << endl;
        }
    }
    return 0;
}