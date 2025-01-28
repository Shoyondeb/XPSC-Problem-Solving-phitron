#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        char str[9][9];
        for(int i=0; i<8; i++){
            for(int j=0; j<8; j++){
                cin>>str[i][j];
            }
        }
       
        
        int b=0,bmax=INT_MIN, r=0,rmax=INT_MIN;
        for(int i=0; i<8; i++){
            for(int j=0; j<8; j++){
                if(str[i][j]=='R'){
                    r++;
                }
            } 
            rmax=max(r,rmax);
            r=0;
        }
        for(int i=0; i<8; i++){
            for(int j=0; j<8; j++){
                if(str[j][i]=='B'){
                    b++;
                }
            }
            bmax=max(b,bmax);
            b=0;
        }
        if(bmax>rmax)cout<<'B'<<endl;
        else{
            cout<<'R'<<endl;
        }
    }

    return 0;
}