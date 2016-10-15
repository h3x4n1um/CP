#include <bits/stdc++.h>

using namespace std;

int n, s, a[1000], b[1000];
bool no = false;

void double_sort(int l, int r){
    int x = a[(l + r) / 2], i = l, j = r;
    while (i < j){
        while (a[i] < x) ++i;
        while (a[j] > x) --j;
        if (i <= j){
            swap(a[i], a[j]);
            swap(b[i], b[j]);
            ++i;
            --j;
        }
    }
    if (i < r) double_sort(i, r);
    if (j > l) double_sort(l, j);
}

int main(){
    freopen("P143SUMA.inp", "r", stdin);
    scanf("%d%d", &s, &n);
    for (int i = 0; i < n; ++i){
        scanf("%d%d", &a[i], &b[i]);
    }
    double_sort(0, n - 1);
    for (int i = 0; i < n; ++i){
        if (s > a[i]) s += b[i];
        else{
            no = true;
            break;
        }
    }
    if (no) printf("NO");
    else printf("YES");
    return 0;
}
