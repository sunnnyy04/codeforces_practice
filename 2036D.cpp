#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<char>> arr(n, vector<char>(m));
        
        for (int i = 0; i < n; i++) {
                cin >> arr[i];
        }
        
        int is = 0, ie = n - 1;
        int js = 0, je = m - 1;
        int ans = 0;
        
        while (is <= ie && js <= je) {
            vector<char> temp;
            
            for (int i = js; i <= je; i++) {
                temp.push_back(arr[is][i]);
            }
            is++;
            
            for (int i = is; i <= ie; i++) {
                temp.push_back(arr[i][je]);
            }
            je--;

            if (is <= ie) {
                for (int i = je; i >= js; i--) {
                    temp.push_back(arr[ie][i]);
                }
                ie--;
            }

            if (js <= je) {
                for (int i = ie; i >= is; i--) {
                    temp.push_back(arr[i][js]);
                }
                js++;
            }
            
            // Check for pattern "1543" in temp vector
            vector<char> extendedTemp = temp;
            extendedTemp.insert(extendedTemp.end(), temp.begin(), temp.begin() + 3);
            
            for (size_t i = 0; i + 3 < extendedTemp.size(); i++) {
                if (extendedTemp[i] == '1' && extendedTemp[i + 1] == '5' &&
                    extendedTemp[i + 2] == '4' && extendedTemp[i + 3] == '3') {
                    ans++;
                }
            }
        }

        cout << ans << endl;
    }

    return 0;
}
