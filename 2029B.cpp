#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        string r;
        cin>>r;
        long long sz=0,so=0,rz=0,ro=0;
        for(int i=0;i<n;i++){
            if(s[i]=='0') sz++;
            else so++;
        }
        bool ans=true;
        for(int i=0;i<n-1;i++){
            if(sz==0 || so==0){
                ans=false;
                break;
            }
            if(r[i]=='0'){
                so--;
            }
            else{
                sz--;
            }
        }
        if(ans) cout<<"yes"<<endl;
        else cout<<"no"<<endl;
    }
}