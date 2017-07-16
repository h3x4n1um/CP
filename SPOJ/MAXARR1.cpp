#include <bits/stdc++.h>

using namespace std;

int T;
int a[100005], f[100005];

int dynamic_programing(int q){
    if(q < 2) return f[q] = q;
    if(f[q]) return f[q];
    if(q % 2 == 0) return f[q] = f[q / 2];
    return f[q] = dynamic_programing(q / 2) + dynamic_programing(q / 2 + 1);
}

int main(){
    #ifndef ONLINE_JUDGE
        freopen("MAXARR1.inp", "r", stdin);
    #endif // ONLINE_JUDGE
    scanf("%d", &T);
    for (int i = 0; i <= 100000; ++i){
        a[i] = dynamic_programing(i);
        a[i] = max(f[i], a[i - 1]);
    }
    while(T-- > 0){
        int n;
        scanf("%d", &n);
        printf("%d\n", a[n]);
    }
    return 0;
}
