#include <bits/stdc++.h>
using namespace std;
#define ll long long
bool distinct(int y){
    bool appeared[10]={false};
    while(y>0){
        if(appeared[y%10]){
            return 0;
        }
        appeared[y%10]=1;
        y/=10;
    }
    return 1;
}
int main(){
    int y;
    cin >> y;
    while(distinct(y+1)==false){
        y++;
    }
    cout << y+1 << endl;
    return 0;
}