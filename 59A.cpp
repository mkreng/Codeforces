#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    string s;
    cin >> s;
    int l=0, u=0;
    for(int i=0; i<s.size(); i++){
        if(s[i]>='a' && s[i]<='z'){
            l++;
        }
        else{
            u++;
        }
    }
    if(l>=u){
        for(int i=0; i<s.size(); i++){
            if(s[i]>='A' && s[i]<='Z'){
                s[i]+='a'-'A';
            }
        }
    }
    else{
        for(int i=0; i<s.size(); i++){
            if(s[i]>='a' && s[i]<='z'){
                s[i]+='A'-'a';
            }
        }
    }
    cout << s << endl;
    return 0;
}