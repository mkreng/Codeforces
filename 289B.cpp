#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int n, m, d;
    cin >> n >> m >> d;
    vector<int> a(n*m);
    for(int i=0; i<n*m; i++){
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    bool ans_exists=true;
    for(int i=1; i<n*m; i++){
        if(a[i]%d!=a[0]%d){
            ans_exists=false;
            break;
        }
    }
    if(!ans_exists){
        cout << "-1\n";
    }
    else{
        int median_element=a[n*m/2];
        int ans=0;
        for(int i=0; i<n*m; i++){
            ans+=abs(a[i]-median_element)/d;
        }
        cout << ans << endl;
    }
    return 0;
}