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
        int one=0, zero=1, count1=0, count2=0;
        for(int i=0; i<str.size(); i++){
            if(str[i]=='1'){
               if(one==0){
                one=1;
                count1++;
               }
            }else{
                one=0;
            }
            if(str[i]=='0'){
                if(zero==1){
                    count2++;
                    zero=0;
                }
            }else{
                zero=1;
            }
        }
        int mini=(count1<count2)? count1:count2;
        cout<<mini<<endl;
        
    }
    return 0;
}