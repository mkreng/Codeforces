#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector <int> round;
        int m=1;
        while(n!=0){
            if(n%10!=0){
                round.push_back((n%10)*m);
            }
            n/=10;
            m*=10;
        }
        cout << endl<< round.size() << endl;
        for(int i: round){
            cout << i << " ";
        }
    }
    return 0;
}