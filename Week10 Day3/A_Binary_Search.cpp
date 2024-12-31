#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{ 
        ll n, k;
        cin>>n>>k;
        deque<ll>dq1;
        deque<ll>dq2;
        for(int i=0; i<n; i++){
            ll x;
            cin>>x;
            dq1.push_back(x);
        }
        for(int i=0; i<k; i++){
            ll x;
            cin>>x;
            dq2.push_back(x);
        }
        vector<string>vec;
        for(int i=0; i<k; i++){
            ll flag=0, f1=0, l1=k-1;
            while(f1<=l1){
                ll mid=(f1+l1)/2;
                if(dq1[mid]==dq2[i]){
                    flag=1;
                    break;
                }else if(dq2[i]<dq1[mid]){
                    l1=mid-1;
                }else if(dq2[i]>dq1[mid]){
                    f1=mid+1;
                }
            }
            if(flag==1){
                vec.push_back("YES");
            }else{
                vec.push_back("NO");
            }
        }
        for(string st:vec){
            cout<<st<<endl;
        }
    
    return 0;
}