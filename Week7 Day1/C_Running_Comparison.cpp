#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        vector<int>vec1;
        vector<int>vec2;
        int n;
        cin>>n;
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
        int count=0;
        for(int i=0; i<n; i++){
            int a=vec1[i];
            int b=vec2[i];
            if(a*2<b || b*2<a){
                continue;
            }else{
                count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}