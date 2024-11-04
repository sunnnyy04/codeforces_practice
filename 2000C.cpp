#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    map<int, vector<int>> mp;

    // Read array `a` and create groups of indices for each unique element.
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        mp[a[i]].push_back(i);
    }

    // Convert map groups to a sorted 2D vector `v`.
    vector<vector<int>> v;
    for (auto ele : mp) {
        v.push_back(ele.second);
    }
    sort(v.begin(), v.end());

    int m;
    cin >> m;
    while (m--) {
        string s;
        cin >> s;

        // Check if the string length matches `n`.
        if (s.length() != n) {
            cout << "NO" << endl;
            continue;
        }

        // Create groups of indices for each character in the string `s`.
        map<char, vector<int>> temp;
        for (int j = 0; j < s.length(); j++) {
            temp[s[j]].push_back(j);
        }

        // Convert character groups to a sorted 2D vector `v1`.
        vector<vector<int>> v1;
        for (auto ele : temp) {
            v1.push_back(ele.second);
        }
        sort(v1.begin(), v1.end());

        // Compare `v` and `v1` for a match.
        if (v == v1) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}
