#include <bits/stdc++.h>

using namespace std;

// #define forn(i, n) for (int i = 0; i < int(n); ++i)

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vector<vector<int>> a(n, vector<int>(n));
    int l = 1, r = n * n, t = 0;
    for(int i=0; i<n; i++) {
      for(int j=0; j<n; j++) {
        if (t) a[i][j] = l++;
        else a[i][j] = r--;
        t ^= 1;
      }
      if (i & 1) reverse(a[i].begin(), a[i].end());
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout << a[i][j] << " \n"[j == n - 1];
        } 
    } 
  }
}