#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int a[4][4];
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            char temp;
            cin >> temp;
            if(temp=='#'){
                a[i][j]=1;
            }
            else{
                a[i][j]=0;
            }
        }
    }
    bool ans=false;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            if(a[i][j]+a[i+1][j]+a[i][j+1]+a[i+1][j+1]>=3 || a[i][j]+a[i+1][j]+a[i][j+1]+a[i+1][j+1]<=1){
                ans=true;
                break;
            }
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