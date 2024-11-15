#include <bits/stdc++.h>
using namespace std;

int ans;

void func(){
    int n;
    cin >> n;
    vector<int> p(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> p[i];
    }
 
    int ans = 0;
    vector<int> chk(n + 1, 0);
    for (int i = 1; i <= n; i++) {
        if (chk[i])
            continue;
 
        int j = p[i];
        int cnt = 1;
        while (j != i) {
            chk[j] = 1;
            j = p[j];
            cnt++;
        }
        chk[i] = 1;
 
        if (cnt <= 2)
            continue;
        ans += (cnt - 1) / 2;
    } 
 
    cout << ans << '\n';
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        func();
    }
    
    return 0;
}
