#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        deque <int> p;
        for (int i = 0; i < n; i++) {
            int x;
            cin>>x;
            p.push_back(x);
            p[i]--;
        }
        int bad = 0;
        for (int i=0; i<n; i++) {
            if (p[i] % k != i % k){
                bad++;
            }
        }
        if(bad == 0)
            cout << 0 << '\n';
        else if(bad == 2)
            cout << 1 << '\n';
        else
            cout << -1 << '\n';
    }
    return 0;
}