#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vint vector<long long>
//#define endl "\n"
int query(int l, int r){
    if(l==r){
        return l;
    }
    cout << "? " << l << " " << r << endl;
    int query_ans;
    cin >> query_ans;
    return query_ans;
}
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    int high=n, low=1;
    while(high-low>1){
        int mid=(high+low)/2;
        int second_highest=query(low, high);
        if(second_highest<mid){
            if(query(low, mid)==second_highest){
                high=mid;
            }
            else{
                low=mid;
            }
        }
        else{
            if(query(mid, high)==second_highest){
                low=mid;
            }
            else{
                high=mid;
            }
        }
    }
    if(query(low, high)==low){
        cout << "! " << high << endl;
    }
    else{
        cout << "! " << low << endl;        
    }
    return 0;
}