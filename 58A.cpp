#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    string s;
    cin >> s;
    bool h=false, e=false, l=false, l_second=false, o=false;
    int temp;
    for(int i=0; i<s.size(); i++){
        if(s[i]=='h'){
            h=true;
            temp=i;
            break;
        }
    }
    for(int i=temp+1; i<s.size(); i++){
        if(s[i]=='e'){
            e=true;
            temp=i;
            break;
        }
    }
    for(int i=temp+1; i<s.size(); i++){
        if(s[i]=='l'){
            l=true;
            temp=i;
            break;
        }
    }
    for(int i=temp+1; i<s.size(); i++){
        if(s[i]=='l'){
            l_second=true;
            temp=i;
            break;
        }
    }
    for(int i=temp+1; i<s.size(); i++){
        if(s[i]=='o'){
            o=true;
            temp=i;
            break;
        }
    }
    if(h==true && e==true && l==true && l_second==true && o==true){
        cout << "YES\n";
    }
    else{
        cout << "NO\n";
    }
    return 0;
}