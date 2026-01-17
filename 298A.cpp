#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vint vector<long long>
#define endl "\n"
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    string s;
    cin >> s;
    bool onlyr=false;
    int start;
    for(int i=0; i<n; i++){
        if(s[i]!='.'){
            start=i+1;
            break;
        }
    }
    for(int i=n-1; i>=0; i--){
        if(s[i]=='R'){
            onlyr=true;
            break;
        }
        if(s[i]=='L'){
            break;
        }
    }
    cout << start << " ";
    if(onlyr){
        int j=n-1;
        while(s[j-1]!='R'){
            j--;
        }
        cout << j+1 << endl;
    }
    else{
        int j=0;
        while(s[j]!='L'){
            j++;
        }
        cout << j << endl;
    }
    return 0;
}