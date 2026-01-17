#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    bool ans=true;
    int twenty_five=0, fifty=0, hundred=0;
    for(int i=0; i<n; i++){
        if(a[i]==25){
            twenty_five++;
        }
        else if(a[i]==50){
            fifty++;
            twenty_five--;
        }
        else{
            hundred++;
            if(fifty>0){
                fifty--;
                twenty_five--;
            }
            else{
                twenty_five-=3;
            }
        }
        if(twenty_five<0 || fifty<0 || hundred<0){
            ans=false;
            break;
        }
    }
    if(ans==true){
        cout << "YES\n";
    }
    else{
        cout << "NO\n";
    }
    return 0;
}