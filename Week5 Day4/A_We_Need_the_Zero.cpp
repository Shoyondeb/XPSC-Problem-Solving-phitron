#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int Xor=0;
        vector<int>vec; 
        for(int i=0; i<n; i++){
            int x;
            cin>>x;
            vec.push_back(x);  
            Xor^=vec[i];
        }
        for(int i=0; i<n; i++){
            vec[i]^=Xor;
        }
        int y=0;
        for(int i=0; i<n; i++){
            y^=vec[i];
        }
        if(y==0){
            cout<<Xor<<endl;
        }else{
            cout<<-1<<endl;
        } 
    }
     
    return 0;
}