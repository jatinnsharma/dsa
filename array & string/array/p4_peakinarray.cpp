#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector < int > a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    bool isFound = false;
    for (int i = 0; i < n; i++) {
        // case : first case
        if ((i == 0 || a[i] > a[i - 1]) && (i == n - 1 || a[i] > a[i + 1])) {
            cout << a[i] << " ";
            isFound = true;
        }
    }

    if (!isFound) {
        cout << -1;
    }


    return 0;

}