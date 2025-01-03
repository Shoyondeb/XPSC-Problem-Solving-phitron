#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t=0;

    while(true){
       int n, q;
       cin>>n>>q;
       if(n==0 && q==0){
        break;
       }else{
        t++;
        cout<<"CASE# "<<t<<":\n";
       }
       deque<int>mset;
       for(int i=0; i<n; i++){
        int x;
        cin>>x;
        mset.push_back(x);
       }
       sort(mset.begin(), mset.end());
       for(int i=1; i<=q; i++){
        int x;
        cin>>x;
        auto it=find(mset.begin(), mset.end(), x);
        
        if(it!=mset.end()){
         int ind=it-mset.begin();
         cout<<x <<" found at "<<ind+1<<endl;
        }else{
            cout<<x<<" not found\n";
        }
       }
    }
    return 0;
}