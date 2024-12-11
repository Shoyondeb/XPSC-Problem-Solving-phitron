#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n, k, p;
        cin>>n>>k>>p;
        int maxi=INT_MIN, m=0;
        for(int i=0; i<n; i++){
            int x;
            cin>>x;
            if(x>maxi){
                maxi=x;
            }
            p+=x; 
        }
        p-=maxi;
        k+=maxi; 
        if(p>k){
            cout<<"Varun\n";
        }else if(p<k){
            cout<<"Ved\n";
        }else{
            cout<<"Equal\n";
        }

    }
    return 0;
}