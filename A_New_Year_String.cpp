#include <iostream>

using namespace std;

int main () {
    int t; cin >> t;
    while (t-- > 0) {
        int n; cin >> n;
        string s; cin >> s;

        int ans1 = 0, ans2 = n;

        for (int i = 0; i + 3 < n; i++) {
            if (s[i] == '2' and s[i + 1] == '0' and s[i + 2] == '2' and s[i + 3] == '5') ans1++;

            int temp = 0;

            if (s[i] != '2') temp++;
            if (s[i + 1] != '0') temp++;
            if (s[i + 2] != '2') temp++;
            if (s[i + 3] != '6') temp++;

            if (temp < ans2) ans2 = temp;
        }

        cout << min(ans1, ans2) << "\n";
    }
    
    return 0;
}