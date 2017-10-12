#include <bits/stdc++.h>

using namespace std;

int main(){
    /*INIT*/
    freopen("DAYCON.INP", "r", stdin);
    freopen("DAYCON.OUT", "w", stdout);
    int n, ans = 0;
    /*CONSTRUCT ARRAY*/
    scanf("%d", &n);
    int *a = new int [n + 1];
    /*READ*/
    for (int i = 1; i <= n; ++i){
        scanf("%d", &a[i]);
    }
    /*PROCESS*/
    for (int i = 1; i <= n; ++i){
        int prev = 1005,
            temp = 1;
        for (int j = 1; j <= n; ++j){
            if (a[i] != a[j]){
                if (prev == a[j]) ++temp;
                else{
                    ans = max(ans, temp);
                    temp = 1;
                    prev = a[j];
                }
            }
        }
        if (prev != 1005) ans = max(ans, temp);
    }
    printf("%d", ans);
    /*DESTRUCTOR*/
    delete [] a;
    return 0;
}
