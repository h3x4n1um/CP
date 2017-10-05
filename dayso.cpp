#include <bits/stdc++.h>

#define fto(i, a, b) for (int i = a; i <= b; ++i)
#define pb push_back
#define oo 1000000007

using namespace std;

int n, d[300004], ans, f, x, y, le, chan;

int main() {

    freopen("dayso.inp", "r", stdin);
    freopen("dayso.out", "w", stdout);

    chan = 0; le = oo;
    scanf("%d", &n);
    if (n == 1) {
        int a, b;
        scanf("%d%d", &a, &b);
        printf("%d\n", b - a);
        exit(0);
    }

    fto(i, 1, 2*n) {
        scanf("%d", &d[i]);
        if (i%2 == 0 && d[i] > chan) {
            chan = d[i];
            x = i;
        }
        else if (i%2 != 0 && d[i] < le) {
            le = d[i];
            y = i;
        }
    }

    fto(i, 1, n) {
        ans += d[2*i-1] - d[2*i];
    }

    swap(d[x], d[y]);

    fto(i, 1, n) {
        f += d[2*i-1] - d[2*i];

    }

    printf("%d\n", max(ans, f));

    return 0;
}
