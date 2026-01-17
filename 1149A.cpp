#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, ones=0, twos=0;
    cin >> n;
    for(int i=0; i<n; i++){
        int temp;
        cin >> temp;
        if(temp==1){
            ones++;
        }
        else{
            twos++;
        }
    }
    if(twos==0){
        for(int i=0; i<n; i++){
            cout << "1 ";
        }
    }
    else if(ones==0){
        for(int i=0; i<n; i++){
            cout << "2 ";
        }
    }
    else{
        cout << "2 1 ";
        twos--;
        ones--;
        for(int i=0; i<twos; i++){
            cout << "2 ";
        }
        for(int i=0; i<ones; i++){
            cout << "1 ";
        }
    }  
    return 0;
}