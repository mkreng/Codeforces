#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vint vector<long long>
#define endl "\n"
vector<bool> isp(1e5+1, 1), on(1e5+1, false);
vint k(99992, 0), lp(1e5+1, 0);
void add(int x){
    if(on[x]){
        cout << "Already on\n";
        return;
    }
    int temp=x;
    vint pf;
    while(x>1){
        int p=lp[x];
        pf.push_back(p);
        while(x%p==0){
            x/=p;
        }
    }
    for(int i=0; i<pf.size(); i++){
        if(k[pf[i]]){
            cout << "Conflict with " << k[pf[i]] << endl;
            return;
        }
    }
    for(int i=0; i<pf.size(); i++){
        k[pf[i]]=temp;
    }
    on[temp]=true;
    cout << "Success\n";
    return;
}
void subtract(int x){
    if(!on[x]){
        cout << "Already off\n";
        return;
    }
    int temp=x;
    vint pf;
    while(x>1){
        int p=lp[x];
        pf.push_back(p);
        while(x%p==0){
            x/=p;
        }
    }
    for(int i=0; i<pf.size(); i++){
        k[pf[i]]=0;
    }
    on[temp]=false;
    cout << "Success\n";
    return;
}
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    isp[0]=isp[1]=false;
    for(int i=2; i<=1e5; i++){
        if(isp[i]){
            lp[i]=i;
            for(int j=2*i; j<=1e5; j+=i){
                isp[j]=false;
                if(lp[j]==0){
                    lp[j]=i;
                }
            }
        }
    }
    int n, m;
    cin >> n >> m;
    while(m--){
        char c;
        cin >> c;
        int x;
        cin >> x;
        if(c=='+'){
            add(x);
        }
        else{
            subtract(x);
        }
    }
    return 0;
}