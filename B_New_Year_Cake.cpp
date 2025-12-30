#include <iostream>
using namespace std;

int help (long long a, long long b, bool start) {
    int size = 1;
    int layer = 0;

    while (1) {
        if (start) {
            if (a < size) break;
            a -= size;
        }
        else {
            if (b < size) break;
            b -= size;
        }

        layer++;
        size <<= 1;
        start = !start;
    }

    return layer;
}

int main () {
    int t; cin >> t;
    while (t-- > 0) {
        long long a, b; cin >> a >> b;

        cout << max(help(a, b, 1), help(a, b, 0)) << endl;
    }

    return 0;
}