#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    long long int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        vector<long long int>vec(n);
        for(long long int i=0; i<n; i++){
            cin>>vec[i];
        }
        sort(vec.begin(), vec.end());
        long long int mini=vec[n-3]-vec[0];
        long long int maxi=vec[n-1]-vec[2]; 
        long long int final=(mini<maxi)?mini:maxi;
        cout<<final<<endl;
    }
    return 0;
}