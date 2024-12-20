#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k; 
        int val=1;
        int check=1;
        vector<int>vec;
        if(k==1){
            for(int i=1; i<=n; i++){
                cout<<i<<" ";
            }
        }else{
            for(int i=n; i>=val; i--){
            vec.push_back(i);
            check++;
            if(check==k && vec.size()!=n){
                vec.push_back(val);
                val++;
                check=1;
            }
        }
        for(int i=0; i<n; i++){
            cout<<vec[i]<<" ";
        } 
        }
        cout<<endl;
    }
    return 0;
}