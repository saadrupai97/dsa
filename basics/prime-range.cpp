// If the numbers in a given range are prime or not

#include<bits/stdc++.h>
using namespace std;

int main(){
    int i,j,a,b;
    cin>>a>>b;

    for(i=a; i<=b; i++){
        for(j=2; j<i; j++){
            if(i%j==0){
                // cout<<i<<" "<<"not prime"<<endl;
                break;
            }
        }
        if(j==i){
            cout<<i<<" "<<"prime"<<endl;
        }
    }
    return 0;
        
}