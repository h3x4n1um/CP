#define oo 1000000001

#include <bits/stdc++.h>

int n, a[300005], minN = oo , maxN = -oo, ans;

int main(){
    scanf("%d", &n);
    for (int i = 0; i < n; ++i){
        scanf("%d", &a[i]);
        maxN = std::max(maxN, a[i]);
        minN = std::min(minN, a[i]);
    }
    double avg = (double) (maxN + minN) / 2, gap = 1e9 + 1;
    for (int i = 0; i < n; ++i){
        if (avg >= a[i]){
            if (gap > avg - a[i]){
                gap = avg - a[i];
                ans = i + 1;
            }
        }
        else{
            if (gap > a[i] - avg){
                gap = a[i] - avg;
                ans = i +1;
            }
        }
    }
    printf("%d", ans);
    return 0;
}
