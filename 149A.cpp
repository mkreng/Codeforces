#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int k;
    cin >> k;
    int a[12];
    for(int i=0; i<12; i++){
        cin >> a[i];
    }
    if(k==0){
        cout << "0\n";
    }
    else{
        sort(a, a+12, greater<>());
        int sum=0, months=0;
        for(int i=0; i<12; i++){    
            if(sum>=k){
                break;
            }
            sum+=a[i];
            months++;
        }
        if(sum<k){
            cout << "-1\n";
        }
        else{
            cout << months << endl;
        }
    }
    return 0;
}