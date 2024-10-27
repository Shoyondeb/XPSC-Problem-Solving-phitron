#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string str;
        cin>>str;
        int first=-1, second=-1;
        for(int i=0; i<n; i++){
            if(str[i]=='B'){
                if(first==-1){
                    first=i+1;
                }
                second=i+1;
            }
        }
        if(first==-1){
            cout<<0<<endl;
        }else if(first==second){
            cout<<1<<endl;
        }else
        cout<<(second-first)+1<<endl;
    }
    return 0;
}