#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin >> n;
    vector<int> v;
    while(n>0){
        if(n%10==4 || n%10==7){
            v.push_back(n%10);
        }
        n/=10;
    }
    if(v.size()==4 || v.size()==7){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
    return 0;
}