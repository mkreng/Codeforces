#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    string s;
    cin >> s;
    if(s[0]!='1'){
        cout << "NO\n";
        return 0;
    }
    else{
        for(int i=0; i<s.size(); i++){
            if(s[i]!='1' && s[i]!='4'){
                cout << "NO\n";
                return 0;
            }
            else{
                if(i>0 && i<s.size()-1 && s[i-1]=='4' && s[i]=='4' && s[i+1]=='4'){
                    cout << "NO\n";
                    return 0;
                }
            }
        }
    }
    cout << "YES\n";
    return 0;
}