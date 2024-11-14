#include<bits/stdc++.h>
using namespace std;
 int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        vector<long long>e;
        vector<long long>o;
        for(long long i=0;i<n;i++){
            long long a;
            cin>>a;
            if(a%2==0) e.push_back(a);
            else o.push_back(a);
        }
        if(e.size()==0 || o.size()==0){
            cout<<0<<endl;
        }
        else{
            long long m=o.size();
            sort(e.begin(),e.end());
            sort(o.begin(),o.end());
           if (o.back() < e.front()) {
            cout << e.size() + 1 << endl;
            }
            else{
                long long ma=o.back();
                bool found=false;
                for(auto &ev:e){
                    if(ma>ev) { 
                        ma+=ev;
                    }
                    else{
                        found=true;
                        break;
                    }
                }
                if(found){
                    cout<<e.size()+1<<endl;
                }
                else{
                    cout<<e.size()<<endl;
                }

            }

        }

    }
}