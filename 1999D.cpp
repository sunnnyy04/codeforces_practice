#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        string t;
        cin>>t;
        int ans=0;
        for(int i=0;i<s.size();i++){
            if(ans>=t.size()){
                if(s[i]=='?'){
                    s[i]='a';
                }
            }
            else{
                if(s[i]==t[ans]){
                    ans++;
                }
                else if(s[i]=='?'){
                    s[i]=t[ans];
                    ans++;
                }
            }
            
        }
        if(ans>=t.size()){
            cout<<"YES"<<endl;
            cout<<s<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }   
}