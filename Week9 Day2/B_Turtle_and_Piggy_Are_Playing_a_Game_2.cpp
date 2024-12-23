#include <bits/stdc++.h>
using namespace std;
const int maxi= 1e5+6; 
int main(){
	int t;
    cin>>t;
    
	while (t--) {
        
    int n;
        cin>>n;
        vector<int>vec(n+1);
	for (int i = 1; i <= n; i++) {
        cin>>vec[i];
	}
	sort(vec.begin(),  vec.end(), greater<int>(  ));
	int v= vec[(n + 1) / 2];
    cout<<v<<endl;
	}
	return 0;
}