#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<long long>a(n);
        for(auto &i : a){
            cin>>i;
        }
        sort(a.begin(),a.end());
        if(n==1){
            cout<<1<<endl;
            continue;
        }
        if(n%2==0){
            long long ans=0;
            for(int i=0;i<n-1;i+=2){
                ans=max(ans,(a[i+1]-a[i]));
            }
            cout<<ans<<endl;
        }
        else{
                long long ans1=INT_MAX;
                for(int i=0;i<n;i++){
                    vector<long long>v;
                    long long ans=1;
                    for(int j=0;j<n;j++){
                        if(i==j) continue;
                        v.push_back(a[j]);
                    }
                    for(int j=0;j<n-1;j+=2){
                        ans=max(ans,(v[j+1]-v[j]));
                    }
                    ans1=min(ans1,ans);
                }
                cout<<ans1<<endl;
    }
}
}