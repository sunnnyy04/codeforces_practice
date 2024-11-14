#include<bits/stdc++.h>
using namespace std;
vector<int> func(int n) {
    if (n == 4) {
        vector<int> ans = {2, 1, 3, 4};
        return ans;
    }
    if (n == 6) {
        vector<int> ans = {1, 2, 4, 6, 5, 3};
        return ans;
    }
    int x = log2(n);
    int y = (1 << x);
    vector<int> ans;
    ans.push_back(y);
    ans.push_back(y - 1);
    ans.push_back(y - 2);
    ans.push_back(3);
    ans.push_back(1);
 
    ans.push_back(2);
    for (int i = 4; i < y - 2; i++)
        ans.push_back(i);
    for (int i = y + 1; i <= n; i++)
        ans.push_back(i);
    reverse(ans.begin(), ans.end());
 
    return ans;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if (n % 2) {
        vector<int> ans = func(n - 1);
        ans.push_back(n);
        cout << n << '\n';
        for (auto i : ans)
            cout << i << ' ';
        cout << '\n';
    } else {
        vector<int> ans = func(n);
        int k = 1 << ((int)log2(n) + 1);
        k--;
        cout << k << '\n';
        for (auto i : ans)
            cout << i << ' ';
        cout << '\n';
    }
    }
}