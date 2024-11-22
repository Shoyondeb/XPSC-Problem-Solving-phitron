// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     long long tt;
//     cin>>tt;
//     while(tt--)
//     {
//       long long n;
//       cin>>n;
//       long long arr[n+10],i;
//       for(i=1;i<=n;i++)
//       {
//           cin>>arr[i];
//       }
//       string s;
//       cin>>s;
//       arr[0]=0;
//       for(i=1;i<=n;i++)
//       {
//          arr[i]=arr[i]+arr[i-1];
//       }
//       int last=n;
//       long long ans=0,j;
//       for(i=0;i<n;i++)
//       {
//           if(s[i]=='L')
//           {
//               int f=0;
//               for(j=last-1;j>i;j--)
//               {
//                   if(s[j]=='R')
//                   {
//                       last=j;
//                       f=1;
//                       break;
//                   }
//                   else
//                   {
//                       last--;
//                   }
//               }
//               if(f==1)
//               {

//                   ans+=arr[last+1]-arr[i];
//               }
//           }
//       }
//       cout<<ans<<endl;
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>prefix(n+10);
        for(int i=1; i<=n; i++){
            cin>>prefix[i];
        }  
        string str;
        cin>>str;
        prefix[0]=0;
        for(int i=1; i<=n; i++){
            prefix[i]=prefix[i-1]+prefix[i];
        }

        int ans=0;
        int last=n;
        for(int i=0; i<n; i++){
            
            if(str[i]=='L'){ 
                int f=0;
               for(int j=last-1; j>i; j--){
                  if(str[j]=='R'){
                    f=1;
                    last=j;
                    break;
                  }else{
                    last--;
                  }
               }
            if(f!=0)
            ans+=prefix[last+1]-prefix[i];
            } 
        }
        cout<<ans<<endl;
    }
    return 0;
}