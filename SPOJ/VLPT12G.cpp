#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v;
    for (int i = 1; i*(i+1)/2 <= (int)1e9; ++i) {
        int x = i*(i+1)/2;
        if (((int)sqrt(x + 1))*((int)sqrt(x + 1)) == x + 1) v.push_back(x);
    }
    int a, b, tc = 0, n = v.size(); //tc: test case

    while (scanf("%d%d", &a, &b) , a != 0, b!= 0) {
        int dem = 0; --b; --a;
        for (int i = 0; i < n; ++i) {
            if (a < v[i] && v[i] < b) ++dem;
        }
        printf("Case %d: %d\n", ++tc, dem);
    }
    return 0;
}
