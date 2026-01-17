#include <bits/stdc++.h>
using namespace std;
int main(){
    int n=0, ques=0, x=0, y=0, z=0;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> x >> y >> z;
        if(x+y+z>=2){
            ques++;
        }
    }
    cout << ques;
}