#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int n;
    cin >> n;
    vector<int> d;
    for(int i=0; i<7; i++){
        int temp;
        cin >> temp;
        d.push_back(temp);
    }
    int sum=accumulate(d.begin(), d.end(), 0);
    int days=0;
    if(n>=sum){
        while(n>sum){
            n-=sum;
            days+=7;
        }
    }
    for(int i=0; i<7; i++){
        if(n<=0){
            break;
        }
        n-=d[i];
        days++;
    }
    int ans=days%7;
    if(ans==0){
        ans=7;
    }
    cout << ans << endl;
    return 0;
}