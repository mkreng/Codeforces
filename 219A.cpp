#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int k;
    string s;
    cin >> k >> s;
    map<char, int> data;
    for(int i=0; i<s.size(); i++){
        data[s[i]]++;
    }
    for(auto i : data){
        if(i.second%k!=0){
            cout << "-1\n";
            return 0;
        }
    }
    for(int l=0; l<k; l++){
        for(auto i : data){
            for(int j=0; j<i.second/k; j++){
                cout << i.first;
            }
        }
    }
    cout << endl;
    return 0;
}