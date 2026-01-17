#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, max=0, s=0;
    cin >> n;
    int a[n-1];
    for(int i=0; i<n; i++){
        cin >> a[i];
        if(a[i]>max){
            max=a[i];
        }
    }
    for(int i=0; i<n; i++){
        s+=max-a[i];
    }
    cout << s;
    return 0;
}