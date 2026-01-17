#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    string s;
    cin >> s;
    int x=(s.size()+1)/2;
    char temp[x];
    for(int i=0; i<s.size(); i+=2){
        temp[i/2]=s[i];
    }
    sort(temp, temp+x);
    for(int i=0; i<x-1; i++){
        cout << temp[i] << "+";
    }
    cout << temp[x-1] << endl;
    return 0;
}