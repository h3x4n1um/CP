#include <bits/stdc++.h>

using namespace std;

int s, k, n;
int ans[25];
vector <int> a[25];

void choose(int i, int temp){
    if (temp == s && i <= k) return;
    if (i > k){
        if (temp == s){
            puts("YES");
            for (int j = 1; j <= k; ++j){
                printf("%d ", ans[j]);
            }
            exit(0);
        }
        return;
    }
    for (int j = a[i].size() - 1; j >= 0; --j){
        if (a[i][j] < ans[i - 1]) return;
        if (s - temp >= a[i][j] * (k - i)){
            ans[i] = a[i][j];
            choose(i + 1, temp + a[i][j]);
        }
    }
}

int main(){
    #ifndef ONLINE_JUDGE
        freopen("V8SCORE.inp", "r", stdin);
    #endif // ONLINE_JUDGE
    scanf("%d%d%d", &s, &k, &n);
    for (int i = 0; i < n; ++i){
        for (int j = 1; j <= k; ++j){
            int temp;
            scanf("%d", &temp);
            a[j].push_back(temp);
        }
    }
    for (int i = 1; i <= k; ++i) sort(a[i].begin(), a[i].end());
    choose(1, 0);
    printf("NO");
    return 0;
}
