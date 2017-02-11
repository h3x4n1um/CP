#include <bits/stdc++.h>

using namespace std;

int n, m;
int a[10005], v[10005], f[10005][10005];
vector <int> back_track;

int main(){
    freopen("balo1.inp", "r", stdin);
    freopen("balo1.out", "w", stdout);
    scanf("%d%d", &n, &m);
    for (int i = 1; i <= n; ++i){
        scanf("%d%d", &a[i], &v[i]);
    }
    for (int i = 1; i <= n; ++i){
        for (int j = 1; j <= m; ++j){
            f[i][j] = f[i - 1][j];
            if (a[i] <= j) f[i][j] = max(f[i - 1][j], f[i - 1][j - a[i]] + v[i]);
        }
    }
    printf("%d\n", f[n][m]);
    int j = m;
    for (int i = n; i >=0; --i){
        if (f[i][j] != f[i - 1][j]){
            back_track.push_back(i);
            j -= a[i];
        }
    }
    reverse(back_track.begin(), back_track.end());
    for (int i = 0; i < back_track.size(); ++i){
        printf("%d ", back_track[i]);
    }
    return 0;
}
