#include <bits/stdc++.h>
 
using namespace std;
 
int main() { 
  int t;
  cin >> t;
  while (t--) {
	string str;
	cin >> str;
	int n = str.size();
	string str1, str2;
	for (int i = 0; i < 2 * n; ++i) {
	  str1 += "()"[i & 1];
	  str2 += ")("[i < n];
	}
	if (str1.find(str) == string::npos) {
	  cout << "YES\n" << str1 << '\n';
	} else if (str2.find(str) == string::npos) {
	  cout << "YES\n" << str2 << '\n';
	} else {
	  cout << "NO\n";
	}
  }
}