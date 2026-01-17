#include <bits/stdc++.h>
using namespace std;
int main(){
    string x;
    cin >> x;
    int y = x[0]-'0';
    if(y!=9){
        cout << min(y, 9-y);
    }
    else{
        cout << y;
    }
    for(int i=1; i<x.size(); i++){
       y=x[i]-'0';
       cout << min(y, 9-y);
    }
    cout << endl;
    return 0;
}