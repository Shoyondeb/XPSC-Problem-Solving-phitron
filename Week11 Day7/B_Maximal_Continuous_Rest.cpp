#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll n;
    cin>>n;
    vector<int>vec;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        vec.push_back(x);
    }
    for(int i=0; i<n; i++){
        if(vec[i]==0) break;
        vec.push_back(vec[i]);
    }
    int maxi=INT_MIN,count=0;
    for(int i=0; i<vec.size(); i++){
        if(vec[i]==1){
            count++;
        }else{
            count=0;
        }
         if(maxi<count){
            maxi=count;
         }
    }
     cout<<maxi<<endl;
    return 0;
}