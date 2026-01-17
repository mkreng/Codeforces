#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    string s;
    cin >> s;
    map<char, int> m;
    for(char c : s){
        m[c]++;
    }
    int odd=0;
    for(auto &p : m){
        if(p.second%2==1){
            odd++;
        }
    }
    if(odd==0 || odd%2==1){
        cout << "First\n";
    }
    else{
        cout << "Second\n";
    }
    return 0;
}