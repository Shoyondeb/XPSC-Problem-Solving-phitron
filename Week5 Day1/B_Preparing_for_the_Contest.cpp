#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k;
        vector<int>vec;
        for(int i=1; i<=k+1; i++){
            vec.push_back(n);
            n--;
        }
        sort(vec.begin(), vec.end());
        for(int v:vec){
            cout<<v<<" ";
        }
        for(int i=n; i>=1; i--){
            cout<<i<<" ";
        }
    cout<<endl;
    }
    return 0;
}