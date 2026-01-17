#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    string s;
    cin >> s;
    bool deleted=false;
    for(int i=0; i<s.size(); i++){
        if(deleted==false && i==s.size()-1){
            break;
        }
        if(deleted==true || s[i]=='1'){
            cout << s[i];
        }
        if(s[i]=='0'){
            deleted=true;
        }
    }
    cout << endl;
    return 0;
}