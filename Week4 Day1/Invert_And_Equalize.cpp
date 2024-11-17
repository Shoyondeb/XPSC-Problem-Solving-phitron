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
        int count1=0, count2=0, zero=0, one=0;
        for(int i=0; i<n; i++){
            if(str[i]=='1'){
                count1=1;
            }else {
                one++;
                count1=0;
            }
            if(str[i]=='0'){
                count2=1;
            }else{
                zero++;
                count2=0;
            }
        }
        for(int i=0; i<n; i++){ 
            if(str[i]=='0'){
                count2=1;
            }else{
                zero++;
                count2=0;
            }
        }
        int mini=(zero<one) ? zero:one;
        cout<<mini<<endl;
    }
    return 0;
}