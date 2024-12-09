#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n<=3){
            for(int i=1; i<=n; i++){
                cout<<i<<" ";
            }
        }else{
            if(n%2==0){
                int i=1, j=n;
                while(i<j){
                    cout<<i<<" "<<j<<" ";
                    i++;
                    j--;
                }
                
            }else{
                int p=n-1;
                int i=1, j=p;
                  while(i<j){
                    cout<<i<<" "<<j<<" ";
                    i++;
                    j--;
                }
                cout<<n;
                
            }
        }
        cout<<"\n";
    }
    return 0;
}