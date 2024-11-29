#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        ll n, m, sum=0;
        cin>>n>>m;
        vector<ll>vec(n+2);
        if(n>m){
            cout<<"No"<<endl;
            continue;
        }else if(n%2==0 && m%2==1){
            cout<<"No\n";
            continue;
        }else if(n%2==0 && m%2==0){
            cout<<"Yes\n";
            for(int i=1;i<=n-2;i++){
                vec[i]=1;
                sum++;
            }
            vec[n-1]=(m-sum)/2;
            vec[n]=(m-sum)/2;
        }else if(n%2==1 && m%2==0){
            cout<<"Yes\n";
            for(int i=1; i<=n-1; i++){
                vec[i]=1;
                sum++;
            }
            vec[n]=m-sum;
        }else if(n%2==1 && m%2==1){
            cout<<"Yes\n";
            for(int i=1; i<=n-1; i++){
                vec[i]=1;
                sum++;
            }
            vec[n]=m-sum;
        }
        
        for(int i=1; i<=n; i++){
            cout<<vec[i]<<" ";
        }
        cout<<endl;
    }
    
    
    return 0;
}