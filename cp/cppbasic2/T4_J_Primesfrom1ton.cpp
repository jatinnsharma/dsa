// Given a number N. Print all prime numbers between 1 and N inclusive.
#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;

    if(n>1){
        for(int i=2;i<=n;i++){
            
            bool isPrime = true;
            for(int j=2;j<=sqrt(i);j++){
                if(i%j==0){
                    isPrime = false;
                    break;
                }
            }

            if(isPrime){
                cout<<i<<'\n';
            }
        }
    }else{
        cout<<"No Prime";
    }


    return 0;
}