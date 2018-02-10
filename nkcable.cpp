#include <bits/stdc++.h>

using namespace std;

int n;
int a[25005], f[25005];

int dist(int i, int j){return abs(a[i] - a[j]);}

int main(){
    freopen("NKCABLE.INP", "r", stdin);
    freopen("NKCABLE.OUT", "w", stdout);
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i){
        int temp;
        scanf("%d", &temp);
        a[i] = a[i - 1] + temp;
        f[i] = 1000005;
    }
    for (int i = 1; i <= n; ++i){
        for (int j = 1; j <= n; ++j){

        }
    }
    return 0;
}
