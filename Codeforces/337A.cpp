#include <bits/stdc++.h>

using namespace std;

int n, m, ans = 1000000007;
vector <int> a;

int main(){
    scanf("%d%d", &n, &m);
    for (int i = 0; i < m; ++i){
        int temp;
        scanf("%d", &temp);
        a.push_back(temp);
    }
    sort(a.begin(), a.end());
    for (int i = 0; i < a.size() - (n - 1); ++i){
        for (int j = i + (n - 1); j < a.size(); ++j){
            ans = min(ans, a[j] - a[i]);
        }
    }
    printf("%d", ans);
    return 0;
}
