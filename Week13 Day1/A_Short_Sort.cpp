#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        string str1,str2,str3;
        str1=str;
        str2=str;
        str3=str;
        swap(str1[0], str1[1]);
        swap(str2[1], str2[2]);
        swap(str3[0],str3[2]);
        if(str=="abc" || str1=="abc"||str2=="abc" ||str3=="abc"){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }
    return 0;
}