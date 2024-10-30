// #include <bits/stdc++.h>
// using namespace std;

// int main() {
// 	// your code goes here
//     int t;
//     cin>>t;
//     while(t--){
//         int n,k;
//         cin>>n>>k;
        
//         string a,b;
//         cin>>a>>b;
        
//         int c =0 ;
//         for(int i=0; i<n; i++){
//             if(a[i] == '1'){
//                 c++;
//             }
            
//             if(b[i] == '1'){
//                 c--;
//             }
//         }
        
//         if(c != 0){
//             cout<<"NO"<<endl;
//         }
//         else{
//             c = 0;
//             int d =0;
            
//             for(int i=0; i<n; i++){
//                 if(a[i] != b[i]){
//                     c++;
//                 }
                
//                 if(a[i] == '1'){
//                     d++;
//                 }
//             }
            
//             c /= 2;
//             if(k < c){
//                 cout<<"NO"<<endl;
//             }
//             else{
//                 if(d>1 || (n-d)>1){
//                     cout<<"YES"<<endl;
//                 }
//                 else if((k-c)%2==0){
//                     cout<<"YES"<<endl;
//                 }
//                 else{
//                     cout<<"NO"<<endl;
//                 }
//             }
//         }
//     }
// }


#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string a,b;
        cin>>a>>b;
        int on=0,n_match=0, one=0;
        for(int i=0; i<n; i++){
            if(a[i]=='1') on++;

            if(b[i]=='1') on--;
        }
        if(on!=0){
            cout<<"NO\n";
        }else{
            for(int i=0; i<n; i++){
                if(a[i]!=b[i]){
                    n_match++;
                }
                if(a[i]=='1'){
                    one++;
                }
            }
            n_match/=2;
            if(k<n_match){
                cout<<"NO\n";
            }else{
                if(one>1 || (n-one)>1){
                    cout<<"YES\n";
                }else if((k-n_match)%2==0){
                    cout<<"YES\n";
                }else{
                    cout<<"NO\n";
                }
            }
        }
    }
    return 0;
}