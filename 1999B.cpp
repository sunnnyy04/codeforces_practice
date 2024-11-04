#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    int a1,a2,b1,b2;
    cin>>a1>>a2>>b1>>b2;
    if(a1==a2 && b1==b2 && a1==b1) cout<<0<<endl;
    else if(min(a1,a2)>max(b1,b2) ){
        cout<<4<<endl;
    }
    else if(min(a1,a2)>=min(b1,b2)){
        if(max(a1,a2)>=max(b1,b2)){
            cout<<2<<endl;
        }
    }
    else if(min(a1,b1)==min(b1,b2)){
       if(max(a1,a2)>max(b1,b2)){
            cout<<2<<endl;
        } 
    }
    else{
        cout<<0<<endl;
    }
}
}