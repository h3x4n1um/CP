#include <bits/stdc++.h>

using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
        freopen("11057.inp", "r", stdin);
    #endif // ONLINE_JUDGE
    int n;
    while(scanf("%d", &n) != EOF){
        int m;
        vector <int> a;
        pair <int, int> ans = make_pair(0, 999999999);
        for (int i = 1; i <= n; ++i){
            int temp;
            scanf("%d", &temp);
            a.push_back(temp);
        }
        scanf("%d", &m);
        sort(a.begin(), a.end());
        for (int i = 0; i < a.size(); ++i){
            for (int j = i + 1; j < a.size(); ++j){
                if (a[i] + a[j] == m && ans.second > a[j] - a[i]){
                    ans = make_pair(a[i], a[j] - a[i]);
                }
            }
        }
        printf("Peter should buy books whose prices are %d and %d.\n\n", ans.first, m - ans.first);
    }
    return 0;
}
