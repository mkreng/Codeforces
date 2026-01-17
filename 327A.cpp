#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    int one=0;
    for(int i=0; i<n; i++){
        cin >> a[i];
        if(a[i]==0){
            b[i]=1;
        }
        else{
            b[i]=-1;
            one++;
        }
    }
    int maxsofar=b[0], maxending=b[0];
    for(int i=1; i<n; i++){
        maxending=max(b[i], maxending+b[i]);
        maxsofar=max(maxsofar, maxending);
    }
    cout << one+maxsofar << endl;
    return 0;
}