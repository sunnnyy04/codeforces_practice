#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

void solve() {
    ll n, m;
    cin >> n >> m;
    vector<ll> v(n);
    for (auto &it : v) cin >> it;
    
    sort(v.begin(), v.end());
    vector<ll> prefixSum(n);
    prefixSum[0] = v[0];
    for (int i = 1; i < n; i++) {
        prefixSum[i] = prefixSum[i - 1] + v[i];
    }

    ll maxSum = 0;
    for (int i = 0; i < n; i++) {
        ll allowedSum = (i == 0 ? 0 : prefixSum[i - 1]) + m;
        ll idx1 = upper_bound(v.begin(), v.end(), v[i] + 1) - v.begin() - 1;
        ll idx2 = upper_bound(prefixSum.begin(), prefixSum.end(), allowedSum) - prefixSum.begin() - 1;
        if (idx2 < i) continue;
        ll currSum = prefixSum[min(idx1, idx2)] - (i == 0 ? 0 : prefixSum[i - 1]);
        maxSum = max(maxSum, currSum);
    }

    cout << maxSum << endl;
}

int main() {
    fastio();
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
