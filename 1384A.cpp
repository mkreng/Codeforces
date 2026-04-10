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
        vint a(n);
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        string temp="";
        for(int i=0; i<200; i++){
            temp+='a';
        }
        vector<string> s(n+1, temp);
        for(int i=0; i<n; i++){
            if(temp[a[i]]=='a'){
                temp[a[i]]='b';
            }
            else{
                temp[a[i]]='a';
            }
            s[i+1]=temp;
        }
        for(auto i:s){
            cout << i << endl;
        }
    }
    return 0;
}