#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
    {int n;
    cin>>n;
    string s;
    cin>>s;
    int op=0;
    int ans=0;
    for(int i=0;i<n;i++){
        if(s[i]=='(' && op==0){
            ans+=1;
            op++;
        }
        else if(s[i]=='(' ){
            ans+=3;
            op++;
        }
        else if(s[i]==')'){
            op--;
        }
        else if(op==0){
            op++;
            ans++;
        }
        else{
            op--;
        }

    }
    cout<<ans<<endl;
    }
}