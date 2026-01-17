#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n, m;
    cin >> n >> m;
    if(n>=30){
        cout << m << endl;
    }
    else{
        long long p=pow(2, n);
        cout << m%p << endl;
    }
    return 0;
}