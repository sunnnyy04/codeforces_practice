#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int q;
        cin >> q;

        int cnt = 0;

        for (int i = 0; i <=s.size() - 4; i++) {
            if (s.substr(i, 4) == "1100") {
                cnt++;
            }
        }

        while (q--) {
            int i, v;
            cin >> i >> v;
            i--; 
            
            if (s.size() < 4) {
                cout << "no" << endl;
                continue;
            }


            for (int j = max(0, i - 3); j <= min((int)s.size() - 4, i); j++) {
                if (s.substr(j, 4) == "1100") {
                    cnt--;
                }
            }


            s[i] = v + '0';


            for (int j = max(0, i - 3); j <= min((int)s.size() - 4, i); j++) {
                if (s.substr(j, 4) == "1100") {
                    cnt++;
                }
            }


            if (cnt > 0) {
                cout << "yes" << endl;
            } else {
                cout << "no" << endl;
            }
        }
    }
}
