
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;                  
//     cin>>t;
//     while(t--){
//         int n;              
//         cin>>n;
//         vector<int>vec(n); 
//         for(int i=0; i<n; i++){
//             cin>>vec[i];
//         }
//         map<int,int>freq;
//         int dups=0;
//         for(int i=0; i<n; i++){
//             freq[vec[i]]++;
//            if(freq[vec[i]]>1){
//             dups++;
//            }
//         }
//         dups+=freq.size();
//         vector<int>ans;
//         while(ans.size()<n){
//             ans.push_back(dups);
//             if(dups>freq.size()){
//                 dups--;
//             }
//         }
        
//         reverse(ans.begin(), ans.end()); 
//         for(int i=0; i<ans.size(); i++){
//             cout<<ans[i]<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        map<int,int>mp;
        int dup=0;
        for(int i=0; i<n; i++){
            int x;
            cin>>x;
            mp[x]++;
            if(mp[x]>1){
                dup++;
            }
        }
        dup+=mp.size();
        vector<int>vec;
        while(vec.size()<n){
            vec.push_back(dup);
            if(dup>mp.size()){
                dup--;
            }
        }
        reverse(vec.begin(), vec.end());
        for(int i=0; i<n; i++){
            cout<<vec[i]<<" ";
        }
        cout<<endl;
    }
}