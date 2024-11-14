#include <bits/stdc++.h>
using namespace std;

int ans;

void func(int prev, vector<int>& p) {
    if (prev == p[p[prev]]) {
        return;
    }
    if (p[p[p[prev]]] ==prev) {
        swap(p[prev], p[p[prev]]);
        ans++;
    } else {
        func(p[prev], p);
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> p(n);
        for (int i = 0; i < n; i++) {
            cin >> p[i];
        }
        
        ans = 0;  // Reset ans for each test case
        
        for (int i = 0; i < n; i++) {
            if (i != p[i] && i != p[p[i]]) {
                func(i, p);
            }
        }
        
        cout << ans << endl;  // Output the result for each test case
    }
    
    return 0;
}
