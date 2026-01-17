#include <bits/stdc++.h>
using namespace std;
#define ll long long
bool check(int n, int k, vector<int> &a, vector<int> &b, int mid){
    for(int i=0; i<n; i++){
        int required=mid*a[i];
        required-=b[i];
        if(required>0){
            if(required<=k){
                k-=required;
            }
            else{
                return false;
            }
        }
    }
    return true;
}
int main(){
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    vector<int> b(n);
    for(int i=0; i<n; i++){
        cin >> b[i];
    }
    int low=0;
    int high=(b[0]+k)/a[0];
    int ans=0;
    while(low<=high){
        int mid=(low+high)/2;
        if(check(n, k, a, b, mid)){
            ans=mid;
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    cout << ans << endl;
    return 0;
}