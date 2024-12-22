#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>vec1;
        vector<int>vec2;
        for(int i=0; i<n; i++){
            int x;
            cin>>x;
            vec1.push_back(x);
        }
        for(int i=0; i<n; i++){
            int x;
            cin>>x;
            vec2.push_back(x);
        }
        int mono=0, ste=0;
        mono+=vec1[n-1];
        for(int i=0; i<n-1; i++){
            if(vec1[i]>vec2[i+1]){
                mono+=vec1[i];
                ste+=vec2[i+1];
            }
        }
        cout<<mono-ste<<endl;
    }
    return 0;
}