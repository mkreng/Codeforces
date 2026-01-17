#include <bits/stdc++.h>
using namespace std;
int main(){
    int x, current_position=0, steps=0;
    cin >> x;
    while(current_position<=x-5){
        current_position+=5;
        steps++;
    }
    while(current_position<=x-4){
        current_position+=4;
        steps++;
    }
    while(current_position<=x-3){
        current_position+=3;
        steps++;
    }
    while(current_position<=x-2){
        current_position+=2;
        steps++;
    }
    while(current_position<=x-1){
        current_position+=1;
        steps++;
    }   
    cout << steps;
    return 0;
}