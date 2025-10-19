// Print the Fibonacci number of N.
// fib(1) = 0.
// fib(2) = 1.
// fib(n) = fib(n - 1) + fib(n - 2).


#include<bits/stdc++.h>
using namespace std;

long long fib (long long n){
    if(n==1) return 0;
    if(n==2) return 1;

    if(n>2){
        return fib(n-1) + fib(n-2);
    }
}

int main(){
    long long n;
    cin>>n;
    cout<<fib(n)<<endl;

    return 0;
}