#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        for(int i=0; i<n*2; i++){
            for(int j=0; j<n*2; j++){
                int value=i/2+j/2;
                if(value%2==0){
                    cout<<"#";
                }else{
                    cout<<".";
                }
            }
            cout<<endl;
        }
    }
    return 0;
}