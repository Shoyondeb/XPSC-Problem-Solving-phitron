#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        string str2;
        int b=0, B=0;
        for(int i=str.size()-1; i>=0; i--){
            if(str[i]=='b'){
                b++;
            }else if(str[i]>='a' && str[i]<='z'){
                if(b==0){
                    str2.push_back(str[i]);
                }else
                b--;
            }else if(str[i]=='B'){
                B++;
            }else if(str[i]>='A' && str[i]<='Z'){
                if(B==0){
                    str2.push_back(str[i]);
                }else{
                    B--;
                }
            } 
        }
        for(int i=str2.size()-1; i>=0; i--){
                cout<<str2[i];
            }
            cout<<endl;
    }
    return 0;
}