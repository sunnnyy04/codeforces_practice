#include <bits/stdc++.h>
using namespace std;

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
        string s;
        cin >> s;

        vector<int> result(n + 1, 0); // Store results for each starting index
        vector<bool> vis(n, false); // Track visited nodes

        // Process each node only once in its cycle
        for (int i = 0; i < n; i++) {
            if (vis[i]) continue; // Skip if already visited

            int j = i;
            int zero_count = 0;
            vector<int> cycle;

            // Find the entire cycle starting from index i
            while (!vis[j]) {
                vis[j] = true;
                cycle.push_back(j);
                if (s[j] == '0') zero_count++;
                j = p[j] - 1; // Move to the next node in the cycle
            }

            // Store the count of '0's for all indices in this cycle
            for (int idx : cycle) {
                result[idx + 1] = zero_count; // Adjust for 1-based indexing in result
            }
        }

        // Output results for each starting position from 1 to n
        for (int i = 1; i <= n; i++) {
            cout << result[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
