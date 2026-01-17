#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    string s;
    cin >> s;
    for(int i=1; i<s.size()-1; i++){
        if(s[i-1]=='W' && s[i]=='U' && s[i+1]=='B'){
            s.replace(i-1, 3, " ");
        }
    }
    s=s.substr(s.find_first_not_of(' '), s.find_last_not_of(' ')-s.find_first_not_of(' ')+1);
    string ans;
    bool space=false;
    for(int i=0; i<s.size(); i++){
        if(s[i]!=' '){
            ans+=s[i];
            space=false;
        }
        else if(space==false){
            ans+=' ';
            space=true;
        }
    }
    if(ans.back()==' '){
        ans.pop_back();
    }
    cout << ans << endl;
    return 0;
}