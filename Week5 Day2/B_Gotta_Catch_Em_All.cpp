#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
    int n, k, l;
    cin>>n>>k>>l;
    int sum=0;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        if(x*k<=l){
            sum+=(x*k);
        }else{
            sum+=l;
        }
    }
    cout<<sum<<endl;
    }
    return 0;
}