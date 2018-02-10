#include <bits/stdc++.h>

using namespace std;

int n, s;
int *a;

int main(){
    freopen("bai4.inp", "r", stdin);
    freopen("bai4.out", "w", stdout);
    scanf("%d", &n);
    a = new int [n + 1];
    for (int i = 1; i <= n; ++i){
        scanf("%d", &a[i]);
        s += a[i];
    }
    for (int k = n; k >= 1; --k){
        if (s % k == 0){
            int subS = 0, j = 1;
            vector <int> ans[k + 5];
            for (int i = 1; i <= n; ++i){
                subS += a[i];
                ans[j].push_back(a[i]);
                if (subS == s / k && a[i + 1] != 0){
                    subS = 0;
                    ++j;
                }
                else if (subS > s) break;
            }
            if (!ans[k].empty()){
                printf("%d %d\n", k, s / k);
                for (j = 1; j <= k; ++j){
                    for (auto i : ans[j]) printf("%d ", i);
                    printf("\n");
                }
                return 0;
            }
        }
    }
    delete [] a;
    return 0;
}
