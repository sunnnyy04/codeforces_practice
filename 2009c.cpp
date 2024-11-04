#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x,y,k;

        cin>>x>>y>>k;
        int a=(x%k)==0?x/k:(x/k)+1;
         int b=(y%k)==0?y/k:(y/k)+1;
        if(a>b){
            cout<<(2*a)-1<<endl;
            
        }
        else if(a==b){
           cout<<(2*a)<<endl; 
        }
        else{
            cout<<(2*b)<<endl;
    
        }
    }
}