#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
    int tests;
    cin >> tests;

    while (tests--) {
        string s;
        cin >> s;

        int n = s.size();
        map<char, vector<int>> let_to_ind;

        for (int i = 0; i < n; ++i) {
            let_to_ind[s[i]].push_back(i);
        }

        int direction = (s[0] < s[n - 1]) ? 1 : -1;
        vector<int> ans;

        if (direction == 1) {
            for (char c = s[0]; c <= s[n - 1]; ++c) {
                for (int idx : let_to_ind[c]) {
                    ans.push_back(idx);
                }
            }
        } else {
            for (char c = s[0]; c >= s[n - 1]; --c) {
                for (int idx : let_to_ind[c]) {
                    ans.push_back(idx);
                }
            }
        }

        int cost = 0;
        for (size_t i = 1; i < ans.size(); ++i) {
            cost += abs(s[ans[i]] - s[ans[i - 1]]);
        }

        cout << cost << " " << ans.size() << '\n';
        for (int idx : ans) {
            cout << idx + 1 << " ";
        }
        cout << '\n';
    }
}
