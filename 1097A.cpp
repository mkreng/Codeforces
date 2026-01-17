#include <bits/stdc++.h>
using namespace std;
int main(){
    string table;
    cin >> table;
    vector<pair<int, int>> v;
    for(int i=0; i<5; i++){
        string temp;
        cin >> temp;
        v.push_back({temp[0], temp[1]});
    }
    bool ans=0;
    for(int i=0; i<5; i++){
        if(table[0]==v[i].first || table[1]==v[i].second){
            ans=1;
        }
    }
    if(ans){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    return 0;
}