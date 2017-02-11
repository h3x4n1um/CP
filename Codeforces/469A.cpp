#include <bits/stdc++.h>

using namespace std;

int n, p, q;
map <int, int> a;

int main(){
    #ifndef ONLINE_JUDGE
        freopen("469A.inp", "r", stdin);
    #endif // ONLINE_JUDGE
    scanf("%d", &n);
    scanf("%d", &p);
    for (int i = 0; i < p; ++i){
        int temp;
        scanf("%d", &temp);
        ++a[temp];
    }
    scanf("%d", &q);
    for (int i = 0; i < q; ++i){
        int temp;
        scanf("%d", &temp);
        ++a[temp];
    }
    for (int i = 1; i <= n; ++i){
        if (a[i] == 0){
            printf("Oh, my keyboard!");
            return 0;
        }
    }
    printf("I become the guy.");
    return 0;
}
