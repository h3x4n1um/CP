#include <bits/stdc++.h>

using namespace std;

int n, b4, after;

int main(){
    #ifndef ONLINE_JUDGE
        freopen("681A.inp", "r", stdin);
        freopen("681A.out", "w", stdout);
    #endif // ONLINE_JUDGE
    scanf("%d", &n);
    for (int i = 0; i < n; ++i){
        string temp;
        cin >> temp;
        scanf("%d%d", &b4, &after);
        if (after - b4 > 0 && b4 >= 2400){
            printf("YES");
            return 0;
        }
    }
    printf("NO");
    return 0;
}
