#include <bits/stdc++.h>

using namespace std;

int n, m, ans;
vector <pair <int, int> > a;

int main(){
    freopen("vegetables.inp", "r", stdin);
    freopen("vegetables.out", "w", stdout);
    int temp = 0;
    scanf("%d%d", &n, &m);
    for (int i = 0; i < m; ++i){
        int temp1, temp2;
        scanf("%d%d", &temp1, &temp2);
        a.push_back(make_pair(temp1, temp2));
    }
    sort(a.begin(), a.end());
    while (n != 0){
        if (n - a[temp].second < 0){
            ans += a[temp].first * n;
            n = 0;
        }
        else{
            ans += a[temp].first * a[temp].second;
            n -= a[temp].second;
        }
        ++temp;
    }
    printf("%d", ans);
    return 0;
}
