#include <bits/stdc++.h>

using namespace std;

int n, m, check, ans;
int f[251];
vector <int> a;

void solve(int q){
    if (check == n){
        ++ans;
        return;
    }
    for (int i = f[q]; i < a.size(); ++i){
        if (a[i] + check <= n){
            if (a[i] >= a[f[q]]){
                check += a[i];
                f[q + 1] = i;
                solve(q + 1);
                check -= a[i];
            }
        }
        else break;
    }
}

int main(){
    #ifndef ONLINE_JUDGE
        freopen("The Coin Change Problem.inp", "r", stdin);
    #endif // ONLINE_JUDGE
    scanf("%d%d", &n, &m);
    for(int i = 0; i < m; ++i){
        int temp;
        scanf("%d", &temp);
        if (temp <= n) a.push_back(temp);
    }
    sort(a.begin(), a.end());
    solve(0);
    printf("%d", ans);
    return 0;
}
