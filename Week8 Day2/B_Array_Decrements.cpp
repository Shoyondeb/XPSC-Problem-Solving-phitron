#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        deque<int>dq1(n+1);
        deque<int>dq2(n+1);
        int dist=0, flag=1;
        for(int i=0; i<n; i++){
            cin>>dq1[i];
        }
        for(int i=0; i<n; i++){
            cin>>dq2[i]; 
            if(dq1[i]<dq2[i]){
                flag=0; 
            }
            int dis=dq1[i]-dq2[i];
            if(dist<dis){
                dist=dis;
            }
        }
        for(int i=0; i<n; i++){
            int dis=dq1[i]-dq2[i];
            if(dis<dist){
                if(dq2[i]!=0){
                    flag=0;
                }
            }
        } 
        if(flag==1){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }

    }
    return 0;
}