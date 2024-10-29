#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n, x;
        cin>>n>>x;
        int maxi=0,mini=0,ind;
        for(int i=1; i<=n-x; i++){
            int value=pow(2,i);
            maxi+=value;
            ind=i;
        }
        while(x--){
            int value;
            value=pow(2,n);
            mini+=value;
            n--;
        }
        cout<<mini-maxi<<endl;
        
    }
    return 0;
}