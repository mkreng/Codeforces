#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    string s;
    cin >> s;
    set<char> unique;
    unique.insert(s.begin(), s.end());
    if(unique.size()%2==0){
        cout << "CHAT WITH HER!\n";
    }
    else{
        cout << "IGNORE HIM!\n";
    }
    return 0;
}