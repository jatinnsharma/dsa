#include<bits/stdc++.h>
using namespace std;

int main(){

    int n,cin>>n;
    bool isPrime=true;

    if(n<=1){
        cout<<"NO";
        return 0;
    }else{
        for(int i=2;i<=sqrt(n);i++){
            if(n%i==0){
                isPrime=false;
                break;
            }
        }
    }

    if(isPrime){
        cout<<"YES";
    }else{
        cout<<"NO";
    }

    return 0;
}