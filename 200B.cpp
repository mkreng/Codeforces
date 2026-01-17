#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int n;
    cin >> n;
    int p[n];
    for(int i=0; i<n; i++){
        cin >> p[i];
    }
    int sum=0;
    for(int i=0; i<n; i++){
        sum+=p[i];
    }
    float ans=sum/(float)n;
    cout << ans << endl;
    return 0;
}