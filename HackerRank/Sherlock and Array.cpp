#include <bits/stdc++.h>

using namespace std;

int T;

int main(){
    scanf("%d", &T);
    while(T-- > 0){
        int n, sum = 0, temp = 0;
        int a[100005];
        bool check = false;
        scanf("%d", &n);
        for (int i = 1; i <= n; ++i){
            scanf("%d", &a[i]);
            sum += a[i];
        }
        for (int i = 1; i <= n; ++i){
            if (sum - a[i] == temp * 2){
                printf("YES\n");
                check = true;
                break;
            }
            temp += a[i];
        }
        if (!check) printf("NO\n");
    }
    return 0;
}
