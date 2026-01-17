#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    string s;
    cin >> s;
    int consecutive=1;
    for(int i=0; i<s.size()-1; i++){
        if(consecutive==7){
            cout << "YES\n";
            return 0;
        }
        if(s[i]==s[i+1]){
            consecutive++;
        }
        else{
            consecutive=1;
        }
    }
    if(consecutive==7){
        cout << "YES\n";
    }
    else{
        cout << "NO\n";
    }
    return 0;
}