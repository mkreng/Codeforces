#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vint vector<long long>
#define endl "\n"
int f(string &s, int i){
    int mxd=s[i]-'0', di=i, temp=s.size()-1;
    for(int j=i+1; j<=min(i+9, temp); j++){
        if(s[j]-'0'-j+i>mxd){
            mxd=s[j]-'0'-j+i;
            di=j;
        }
    }
    return di;
}
void sw(string &s, int i, int j){
    char c=s[j];
    for(int k=j; k>i; k--){
        swap(s[k], s[k-1]);
    }
    s[i]=(c-'0'-(j-i))+'0';
    return;
}
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        for(int i=0; i<s.size(); i++){
            int j=f(s, i);
            sw(s, i, j);
        }
        cout << s << endl;
    }
    return 0;
}