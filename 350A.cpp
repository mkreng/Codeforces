#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    vector<int> b(m);
    for(int i=0; i<m; i++){
        cin >> b[i];
    }
    int v=max(2*(*min_element(a.begin(), a.end())), *max_element(a.begin(), a.end()));
    if(v>=*min_element(b.begin(), b.end())){
        cout << "-1\n";
    }
    else{
        cout << v << endl;
    }
    return 0;
}