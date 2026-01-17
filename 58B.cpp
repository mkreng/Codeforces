#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vint vector<long long>
#define endl "\n"
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    int temp=n;
    vint pfact;
    while(n%2==0 && n>0){
        pfact.push_back(2);
        n/=2;
    }
    for(int i=3; i<=n; i+=2){
        while(n%i==0 && n>0){
            pfact.push_back(i);
            n/=i;
        }
    }
    cout << temp << " ";
    int last=temp;
    for(int i=0; i<pfact.size(); i++){
        cout << last/pfact[i] << " ";
        last/=pfact[i];
    }
    cout << endl;
    return 0;
}