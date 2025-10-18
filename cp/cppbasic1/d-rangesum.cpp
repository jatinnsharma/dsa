// https://codeforces.com/group/MWSDmqGsZm/contest/326907/problem/D

#include <bits/stdc++.h>
using namespace std;
 
long long findSum(long long n) {
    return (n * 1ll * (n + 1)) / 2;
}
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long a, b;
        cin >> a >> b;
        
        if(a>b){
            swap(a,b);
        }
 
        long long sum = findSum(b) - findSum(a - 1);
        cout << sum << "\n";
    }
    return 0;
}