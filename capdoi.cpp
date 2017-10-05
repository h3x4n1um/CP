#include <bits/stdc++.h>

using namespace std;

int n, m, ans = 1000000007;
vector <int> a, b;

int main(){
    freopen("capdoi.inp", "r", stdin);
    freopen("capdoi.out", "w", stdout);
    scanf("%d%d", &m, &n);
    for (int i = 1; i <= m; ++i){
        int temp;
        scanf("%d", &temp);
        a.push_back(temp);
    }
    for (int i = 1; i <= n; ++i){
        int temp;
        scanf("%d", &temp);
        b.push_back(temp);
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    int i = 0, j = 0;
    while(i < a.size() && j < b.size()){
        ans = min(ans, abs(a[i] - b[j]));
        if (a[i] > b[j]) ++j;
        else if (a[i] < b[j]) ++i;
        else break;
    }
    printf("%d", ans);
    return 0;
}
