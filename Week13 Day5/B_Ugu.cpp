// #include<bits/stdc++.h>
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;
// using namespace std;
// typedef tree<int, null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> OS;
// typedef tree<int, null_type, less_equal<int>, rb_tree_tag,tree_order_statistics_node_update> OMS;
// //constants :
// const int   N                               = (int) 1e6+5;
// const int   M                               = (int) 1e9+5;
// const int   mod                             = (int) 1000000007;
// const int   max_prime                       = (int) 1e6+3;
// const int   BLKs                            = (int) 70000;
// const int   BLKspan                         = (int) 700;
// //data_type_compressions :
// #define ll long long int
// #define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);




// int main(){
//     Faster;
//     int t;                  cin>>t;
//     while(t--){
//         int n;              cin>>n;
//         string s;           cin>>s;

//         if(is_sorted(s.begin(),s.end())){
//             cout<<0<<endl;
//             continue;
//         }

//         ll ans=0;
        
//         if(s.back()=='0'){
//             int r=n-1;
//             for(int i=n-1;i>=0;i--){
//                 if(s[i]=='1'){
//                     while(i>-1 and s[i]=='1'){
//                         swap(s[i],s[r]);
//                         i--;
//                         r--;
//                     }
//                     break;
//                 }
//             }
//             ans++;
//         }
//         if(is_sorted(s.begin(),s.end())){
//             cout<<1<<endl;
//             continue;
//         }
//         bool switched=false;
//         for(int i=n-1;i>=0;i--){
//             if(switched){
//                 if(s[i]=='1' and (i==0 or s[i-1]=='0')){
//                     ans+=2;
//                 }
//             }
//             else{
//                 if(s[i]=='0'){
//                     switched=true;
//                 }
//             }
//         }
//         cout<<ans<<endl;
//     }
//     return 0;
// }


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
        string dq;
        cin>>dq;
        if(is_sorted(dq.begin(),dq.end())){
            cout<<0<<endl;
            continue;
        }
        int ans=0;
        if(dq.back()=='0'){
            int r=n-1;
            for(int i=n-1; i>=0; i--){
                if(dq[i]=='1' ){
                    while(i>-1 && dq[i]=='1'){
                        swap(dq[r],dq[i]);
                        i--;r--;
                    }
                    break;
                }
            }
            ans++;
        }
        if(is_sorted(dq.begin(),dq.end())){
            cout<<1<<endl;
            continue;
        }
        bool sw=false;

        for(int i=n-1; i>=0; i--){
           if(sw){
            if(dq[i]=='1' &&(i==0 || dq[i-1]=='0')){
                ans+=2;
            }
           }else{
            if(dq[i]=='0'){
                sw=true;
            }
           }
        }
        cout<<ans<<endl;
    }
    return 0;
}