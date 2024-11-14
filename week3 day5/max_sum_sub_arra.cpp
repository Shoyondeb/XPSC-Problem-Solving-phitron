#include <bits/stdc++.h>
using namespace std;class solution{
    public:
     long long int maximumSumSubarray(vector<int>& arr, int k) {
        long long int count=0;
        long long int final=INT_MIN;
        for(int i=0; i<=arr.size()-k; i++){
            for(int j=i; j<i+k; j++){
                count+=arr[j];
            }
            if(count>final){
                final=count;
                count=0;
            }else{
                count=0;
            }
        }
        return final;
    }
};

int main(){
    solution a;
    vector<int>vec;
    int n,value;
    cin>>n>>value;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        vec.push_back(x);
    }
   int ans= a.maximumSumSubarray(vec, value);
   cout<<ans<<endl;
}