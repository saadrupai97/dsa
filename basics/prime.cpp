// If a given number is prime or not

#include<bits/stdc++.h>
using namespace std;

int main(){
    int i,n;
    cin>>n;

    for(i=2; i<n; i++){
        if(n%i==0){
            cout<<"not prime"<<endl;
            break;
        }
    }

    if(i == n){
        cout<<"prime"<<endl;
    }
    return 0;
}