#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string str; 
        cin>>str;
        int count=0;
        for(int i=0; i<n; i++){
            if(str[i]=='S'){
                count++;
            }
        }
        if(count<k){
            cout<<n+((k-count)-1)<<endl;
        }else{
            cout<<n<<endl;
        }
    }
    return 0;
}