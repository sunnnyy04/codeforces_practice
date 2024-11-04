#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void file() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}

void inputArr(ll n, ll arr[]) {
	for(ll i = 0; i < n; i++) cin >> arr[i];
}

void solve() {
	ll n, k;
	cin >> n >> k;
	ll arr[n];
	inputArr(n, arr);

	// Sort in descending order
	sort(arr, arr + n, greater<ll>());

	ll ans = 0;
	for(ll i = 1; i < n; i += 2) {
		ll diff = arr[i - 1] - arr[i];
		if(diff <= k) {
			k -= diff;
		} else {
			ans += (diff - k);
			k = 0;
		}
	}

	if(n % 2 != 0) ans += arr[n - 1];

	cout << ans << "\n";
}

int main() {
	file();
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int t;
	cin >> t;
	while(t--) {
		solve();
	}
	return 0;
}
