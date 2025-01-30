#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        string a,b;
        cin>>a>>b;
        int count=0, maxi=INT_MIN;
        for(int i=0; i<a.size(); i++){
            for(int j=0; j<b.size(); j++){
                count=0;
                if(a[i]==b[j]){
                    count++;
                    int k,q;
                    k=i+1;
                    q=j+1;
                    while(k<a.size() && q<b.size()){
                        if(a[k]==b[q]){
                            count++;
                            k++;
                            q++;
                        }else{
                            break;
                        }
                        
                    }
                    maxi=max(count,maxi);
                }
            }
        }
        cout<<(a.size()+b.size())-(2*maxi)<<endl;
        
    }
    return 0;
}