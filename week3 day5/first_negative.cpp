#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    vector<int> FirstNegativeInteger(vector<int>& arr, int k) {
        vector<int>vec;
        int count=0;
        for(int i=0; i<=arr.size()-k; i++){
            for(int j=i; j<i+k; j++){
                if(count==0 && arr[j]<0){
                    count=arr[j];
                }
            }
            vec.push_back(count);
            count=0;
        }
        return vec;
    }
};
int main(){
    Solution a;
    vector<int>vec;
    int n,value;
    cin>>n>>value;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        vec.push_back(x);
    }
   vector<int>vec2= a.FirstNegativeInteger(vec, value);
   for(int i:vec2){
    cout<<i<<" ";
   } 
}