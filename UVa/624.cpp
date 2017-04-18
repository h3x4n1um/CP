#include <bits/stdc++.h>

using namespace std;

int n, m;
int a[25], d[25];
vector <int> ans;

void sum(int p, int q, int pos){
    if (q <= n){
        int s_ans = 0;
        for (int i = 0; i < ans.size(); ++i){
            s_ans += ans[i];
        }
        if (n - q < n - s_ans){
            ans.clear();
            for (int i = 1; i < p; ++i){
                ans.push_back(d[i]);
            }
        }
    }
    for (int i = pos; i <= m; ++i){
        d[p] = a[i];
        sum(p + 1, q + a[i], i + 1);
    }
}

int main(){
    #ifndef ONLINE_JUDGE
        freopen("624.inp", "r", stdin);
    #endif // ONLINE_JUDGE
    while(scanf("%d", &n) != EOF){
        ans.clear();
        scanf("%d", &m);
        for (int i = 1; i <= m; ++i){
            scanf("%d", &a[i]);
        }
        sum(1, 0, 1);
        int temp = 0;
        for (int i = 0; i < ans.size(); ++i){
            printf("%d ", ans[i]);
            temp += ans[i];
        }
        printf("sum:%d\n", temp);
    }
    return 0;
}
