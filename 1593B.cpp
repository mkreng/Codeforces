#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vint vector<long long>
#define endl "\n"
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vint digits;
        while(n>0){
            digits.push_back(n%10);
            n/=10;
        }
        bool ans5=false, ans0=false, found5=false, found0=false;
        int ones_index0=-1, ones_index5=-1, tens_index=-1;
        for(int i=0; i<digits.size(); i++){
            if(digits[i]==0 && found0==0){
                found0=1;
                ones_index0=i;
            }
            if(digits[i]==5 && found5==0){
                found5=1;
                ones_index5=i;
            }
            if(found5==1 && (digits[i]==2 || digits[i]==7) && i!=ones_index5){
                ans5=1;
                tens_index=i;
                break;
            }
            if(found0==1 && (digits[i]==0 || digits[i]==5) && i!=ones_index0){
                ans0=1;
                tens_index=i;
                break;
            }
        }
        cout << tens_index-1 << endl;
    }
    return 0;
}