#include <bits/stdc++.h> 
using namespace std; 
int main()
{
	int t;
	cin >> t;
    begin:
	while (t--){
 
	int n, k;
	cin >> n >> k;
	vector<long long> s(n + 1);
	for (int i = n - k + 1; i <= n; ++i)
		cin >> s[i];
	if (k == 1)
	{
		cout << "YES" << endl;
		goto begin;
	}
	vector<long long> a(n + 1);
	for (int i = n - k + 2; i <= n; ++i)
		a[i] = s[i] - s[i - 1];
	if (!std::is_sorted(a.begin() + n - k + 2, a.end()))
	{
		cout << "NO" << endl;
		goto begin;
	}
	if (s[n - k + 1] > a[n - k + 2] * (n - k + 1))
	{
		cout << "NO" << endl;
		goto begin;
	}
	cout << "YES" << endl;
}
    
	return 0;
}