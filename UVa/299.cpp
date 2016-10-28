#include <bits/stdc++.h>

using namespace std;

int n;

int main(){
    scanf("%d", &n);
    while (n-->0){
        int l, ans = 0;
        vector <int> a;
        scanf("%d", &l);
        for (int i = 0; i < l; ++i){
            int temp;
            scanf("%d", &temp);
            a.push_back(temp);
        }
        for (int i = 0; i < l; ++i){
            for (int j = i + 1; j < l; ++j){
                if (a[i] > a[j]){
                    swap(a[i], a[j]);
                    ++ans;
                }
            }
        }
        printf("Optimal train swapping takes %d swaps.\n", ans);
    }
    return 0;
}
