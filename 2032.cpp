#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
    int n;
    cin >> n;
    vector<int> a(n);
    for(auto &x : a) {
        cin >> x;  
    }
    
    sort(a.begin(), a.end());
    
    long long ans = n;

    for(long long i = 0; i < n-1; i++) {
        int left=i+1,right=n-1,ind=i+1;
        while(left<=right){
            int mid=(left+right)/2;
            if(a[i]+a[i+1]>a[mid]){
                ind=mid;
                left=mid+1;
            }
            else{
                right=mid-1;
            }
            ans=min(ans,n-(ind-i+1));

        }

    }
    cout << ans << endl;
}
}