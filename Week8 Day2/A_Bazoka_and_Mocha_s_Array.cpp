#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t; 
    while(t--){
          deque<int>dq1;
          deque<int>dq2;
          int x=0;
          int n, flag=0;
          cin>>n;
          int ans=0, check=0, ch1=0;
          for(int i=0; i<n; i++){
            int val;
            cin>>val;
            if(val<x){
                flag=1;
            }
            x=val;
            if(flag==1){

                dq2.push_back(val);
            }else{
                 
                dq1.push_back(val);
                ch1=val;
            }
          }
          
          dq2.insert(dq2.end(), dq1.begin(), dq1.end());
          for(int i=0; i<dq2.size()-1; i++){ 
            if(dq2[i]>dq2[i+1]){
                ans=1;
                break;
            }
          }
        if(ans==1){
            cout<<"No";
        }else{
            cout<<"Yes";
        }
          cout<<endl;
    }
    return 0;
}