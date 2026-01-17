#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    string a, b;
    cin >> a >> b;
    if(a.size()!=b.size()){
        cout << "NO\n";
        return 0;
    }
    int diff=0;
    vector<int> index;
    for(int i=0; i<a.size(); i++){
        if(diff>2){
            cout << "NO\n";
            return 0;
        }
        if(a[i]!=b[i]){
            diff++;
            index.push_back(i);
        }
    }
    if(diff!=2){
        cout << "NO\n";
        return 0;
    }
    swap(a[index[0]], a[index[1]]);
    if(a!=b){
        cout << "NO\n";
        return 0;
    }
    cout << "YES\n";
    return 0;
}