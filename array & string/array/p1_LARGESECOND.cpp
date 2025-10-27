#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        
        if(n==2){
            cout<<a[0]+a[1]<<'\n';
        }else if(n>2){
            int sum =0;
            int flarge = INT_MIN;
            int slarge = INT_MIN;
            for(int i=0;i<n;i++){
                
                if(a[i] > flarge){
                    slarge=flarge;
                    flarge = a[i];
                }else if(a[i] > slarge && a[i]<flarge){
                    slarge=a[i];
                }
                
            }
            
            cout<<flarge+slarge<<'\n';
        }
        
    }
}
