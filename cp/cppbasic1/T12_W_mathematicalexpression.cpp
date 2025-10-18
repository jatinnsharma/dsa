#include<bits/stdc++.h>
using namespace std;
 
int main() {
    long long A, B, C;
    char S, Q;
    
    cin >> A >> S >> B >> Q >> C;
 
    long long result;
    
    if (S == '+') result = A + B;
    else if (S == '-') result = A - B;
    else if (S == '*') result = A * B;
 
    if (result == C) cout << "Yes" << endl;
    else cout << result << endl;
 
    return 0;
}