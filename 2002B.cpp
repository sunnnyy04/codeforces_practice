#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        bool x=true;
        vector<int>a(n),b(n);
        for (int i=0;i<n;i++){
            cin>>b[i];

        }
        for (int i=0;i<n;i++){
            cin>>b[i];

        }
        reverse(a.begin(),a.end());
        if(a==b){
            x=true;
        }
        if(x){
            cout<<"Bob"<<endl;
        }
        else{
            cout<<"Alice"<<endl;
        }

    }
}