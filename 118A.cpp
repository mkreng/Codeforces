#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    string s;
    cin >> s;
    for(int i=0; i<s.size();){
        if(s[i]=='a' || s[i]=='A' || s[i]=='e' || s[i]=='E' || s[i]=='i' || s[i]=='I' || s[i]=='o' || s[i]=='O' || s[i]=='u' || s[i]=='U' || s[i]=='y' || s[i]=='Y'){
            s.erase(i, 1);
        }
        else{
            i++;
        }
    }
    for(int i=0; i<s.size(); i++){
        if(s[i]>='A' && s[i]<='Z'){
            s[i]+='a'-'A';
        }
    }
    string ans;
    for(int i=0; i<s.size(); i++){
        ans.push_back('.');
        ans.push_back(s[i]);
    }
    cout << ans << endl;
    return 0;
}