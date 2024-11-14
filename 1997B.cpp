#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() 
{
	ll n;
	cin >> n;
 
	char c[2][n];
	for(ll i = 0; i < 2; i++) {
		for(ll j = 0; j < n; j++) cin >> c[i][j];
	}
 
	ll ans = 0;
	for(ll i = 0; i < 2; i++) {
		for(ll j = 1; j < n - 1; j++) {
			if(i == 0) {
				if(c[i][j] == '.' && c[i][j - 1] == '.' && c[i][j + 1] == '.' && c[i + 1][j] == '.' && c[i + 1][j + 1] == 'x' && c[i + 1][j - 1] == 'x') ans++;
			} else {
				if(c[i][j] == '.' && c[i][j - 1] == '.' && c[i][j + 1] == '.' && c[i - 1][j] == '.' && c[i - 1][j + 1] == 'x' && c[i - 1][j - 1] == 'x') ans++;
			}
		}
	}
 
	cout << ans << endl;
 
}
 
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t = 1;
	cin >> t;
	while(t--)
	{
		solve();
	}
	return 0;
}