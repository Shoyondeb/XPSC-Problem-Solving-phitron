#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    
    int n;
    cin>>n;
    vector<int>vec1(n);
    vector<int>vec2(n);
    for(int i=0; i<n; i++){
        cin>>vec1[i];
        cin>>vec2[i];
    }
    if(vec1==vec2){
        cout<<1<<endl;
    }
    return 0;
}