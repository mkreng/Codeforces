#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int n;
    cin >> n;
    int x=0, ans, l, m;
    cin >> l >> m;
    x+=m-l;
    ans=x;
    for(int i=1; i<n; i++){
        int a, b;
        cin >> a >> b;
        x+=b-a;
        if(x>ans){
            ans=x;
        }
    }
    cout << ans << endl;
    return 0;
}