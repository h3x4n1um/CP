#include <bits/stdc++.h>

using namespace std;

pair <int, int> a[1005];
int n;

int main(){
    freopen("bai4.inp", "r", stdin);
    freopen("bai4.out", "w", stdout);
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i){
        int temp;
        scanf("%d", &temp);
        a[temp] = make_pair(a[temp].first + 1, temp);
    }
    sort(a + 1, a + n + 1);
    reverse(a + 1, a + n + 1);
    int i = 1;
    printf("%d\n", a[i].second);
    while(a[i].first == a[i + 1].first){
        ++i;
        printf("%d\n", a[i].second);
    }
    return 0;
}
