#include <bits/stdc++.h>

using namespace std;

int n, ans;

int main(){
    int sum = 0;
    for (int i = 1; i <= 3; ++i){
        int temp;
        scanf("%d", &temp);
        sum += temp;
    }
    ans += sum / 5;
    if (sum % 5 > 0) ++ans;

    sum = 0;
    for (int i = 1; i <= 3; ++i){
        int temp;
        scanf("%d", &temp);
        sum += temp;
    }
    ans += sum / 10;
    if (sum % 10 > 0) ++ans;

    scanf("%d", &n);
    if (ans > n) printf("NO");
    else printf("YES");

    return 0;
}
