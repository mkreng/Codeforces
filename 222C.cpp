#include <bits/stdc++.h>
using namespace std;
// #define int long long
#define vint vector<int>
#define endl "\n"
vector<bool> isp(1e7+1, 1);
vint lp(1e7+1), pr(1e7+1, 0), cpa(1e7+1, 0), cpb(1e7+1, 0);
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    isp[0]=isp[1]=false;
    for(int i=2; i<=1e7; i++){
        if(isp[i]){
            lp[i]=i;
            for(int j=2*i; j<=1e7; j+=i){
                isp[j]=false;
                if(lp[j]==0){
                    lp[j]=i;
                }
            }
        }
    }
    int n, m;
    cin >> n >> m;
    vint a(n), b(m);
    for(auto &i:a){
        cin >> i;
        int temp=i;
        while(temp>1){
            pr[lp[temp]]++;
            temp/=lp[temp];
        }
    }
    for(auto &i:b){
        cin >> i;
        int temp=i;
        while(temp>1){
            int p=lp[temp];
            while(temp%p==0){
                if(pr[p]>0){
                    pr[p]--;
                    cpa[p]++;
                    cpb[p]++;
                }
                temp/=p;
            }
        }
    }
    cout << n << " " << m << endl;
    for(int i=0; i<n; i++){
        int temp=a[i], f=1;
        while(temp>1){
            int p=lp[temp];
            if(cpa[p]>0){
                cpa[p]--;
            }
            else{
                f*=p;
            }
            temp/=p;
        }
        cout << f << " ";
    }
    cout << endl;
    for(int i=0; i<m; i++){
        int temp=b[i], f=1;
        while(temp>1){
            int p=lp[temp];
            if(cpb[p]>0){
                cpb[p]--;
            }
            else{
                f*=p;
            }
            temp/=p;
        }
        cout << f << " ";
    }
    cout << endl;
    return 0;
}