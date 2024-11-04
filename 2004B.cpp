#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long l,r;
        cin>>l>>r;
        long long L,R;
        cin>>L>>R;
        if(L>r || l>R){
            cout<<1<<endl;
        }
        else if(r==L || R==l){
            cout<<2<<endl;
        }
        else if(l>L){
            if(r>R){
                cout<<R-l+2<<endl;
            }
            else if(r==R){
                cout<<R-l+1<<endl;
            }
            else if(R > r){
                cout<<r-l+2<<endl;
            }

        }
        else if(l==L){
            if(r>R){
                cout<<R-l+1<<endl;
            }
            else if(r==R){
                cout<<r-l<<endl;
            }
            else if(R > r){
                cout<<r-l+1<<endl;
            }
        }
        else if(L>l){
            if(r>R){
                cout<<R-L+2<<endl;
            }
            else if(r==R){
                cout<<R-L+1<<endl;
            }
            else if (R > r){
                cout<<r-L+2<<endl;
            }
        }
        else{
            cout<<0<<endl;
        }
    }
}