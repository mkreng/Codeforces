#include <bits/stdc++.h>
using namespace std;
int main(){
    int count=0, n=0, m=0;
    cin >> n >> m;
    for(int a=0; a<=1000; a++){
        for(int b=0; b<=1000; b++){
            if(a*a+b==n && a+b*b==m){
                count++;
            }
        }
    }
    cout << count;
    return 0;
}