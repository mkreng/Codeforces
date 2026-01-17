#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vint vector<long long>
#define endl "\n"
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k, x;
    cin >> n >> k >> x;
    vint a(n);
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    int grp=0;
    vint grpend;
    for(int i=0; i<n-1; i++){
        if(a[i]+x<a[i+1]){
            grp++;
            grpend.push_back(i);
        }
    }
    grp++;
    grpend.push_back(n-1);
    vint merge;
    for(int i=0; i<grpend.size()-1; i++){
        int temp=(a[grpend[i]+1]-a[grpend[i]])/x;
        if((a[grpend[i]+1]-a[grpend[i]])%x!=0){
            temp++;
        }
        merge.push_back(temp-1);
    }
    sort(merge.begin(), merge.end());
    for(int i=0; i<merge.size(); i++){
        if(k>=merge[i]){
            grp--;
            k-=merge[i];
        }
        else{
            break;
        }
    }
    cout << grp << endl;
    return 0;
}