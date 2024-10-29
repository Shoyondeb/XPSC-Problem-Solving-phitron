#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
       
       int n;
       cin>>n;
       vector<int>vec(n);
       int one=0, two=0;
       for(int i=0; i<n; i++){
        cin>>vec[i];
        one+=vec[i];
        two+=vec[i];
       }
       int p=0,j=0;
       if(one%2==0) cout<<n<<endl;
       else{
       for(int i=0; i<vec.size(); i++){
            one-=vec[i];
            p++;
            if(one%2==0){
                break;
            }
       }
       for(int i=vec.size()-1; i>=0; i--){
            two-=vec[i];
            j++;
            if(two%2==0){
                break;
            }
       }
       if(p<j){
        cout<<n-p<<endl;
       }else{
        cout<<n-j<<endl;
       }
       }

       }
    
    return 0;
}