#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int k;
        cin>>k;
        multiset<int>mset;
        for(int i=0; i<k; i++){
            int x;
            cin>>x;
            mset.insert(x);
        }
         
        int ne=k-2;
        auto it=mset.find(1);
        if(it!=mset.end())
        mset.erase(it);
        auto it2=mset.find(ne);
        if(it!=mset.end() && it2!=mset.end()){
            cout<<ne<<" "<<1<<endl;
        }else{ 
            for(int i=1; i<=ne; i++){ 
                if(ne%i==0){
                    int div=ne/i; 
                     auto it3=mset.find(div);
                     if(it3!=mset.end())
                     mset.erase(it3);
                     auto it4=mset.find(i);
                      if(it3!=mset.end() && it4!=mset.end()){
                    cout<<div<<" "<<i<<endl;
                    break;
                    }
                }
            }
        }
    }
    return 0;
}