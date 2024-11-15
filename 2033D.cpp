#include <bits/stdc++.h>

using namespace std;

#define fastIO                                                                 \
    ios::sync_with_stdio(false);                                               \
    cin.tie(NULL);                                                             \
    cout.tie(NULL);                                                            \
    cout.precision(numeric_limits<double>::max_digits10);


#define int long long

void CoderAbhi27() {
    int n;
    cin >> n;
    vector<int> a(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }

    vector<int> pr(n + 1, 0);
    for (int i = 1; i <= n; i++)
        pr[i] = a[i] + pr[i - 1]; // O(n)

    vector<int> dp(n + 1, 0);
    dp[0] = 0;
    map<int, int> mp;
    mp[0] = 0;

    for (int i = 1; i <= n; i++) {
        dp[i] = dp[i - 1];
        if (mp.find(pr[i]) != mp.end()) { // O(logn)
            dp[i] = max(dp[i], dp[mp[pr[i]]] + 1);
        }
        mp[pr[i]] = i;
    } // O(nlogn)

    cout << dp[n] << '\n';
}



int32_t main() {
    fastIO;

    int t = 1;
    cin >> t;
    while (t--) {
        CoderAbhi27();
    }
    return 0;
}