#include <bits/stdc++.h>

using namespace std;

int n, a[200005];

int main(){
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i){
        scanf("%d", &a[i]);
    }
    for (int i = 1; i <= n; ++i){
        int j = 1, m = 0, temp = i;
        for (int k = 1 ; k < temp; ++k){
            if (a[k] == temp){
                temp = k;
                ++m;
                break;
            }
        }
        while (j != temp){
            if (abs(j - temp) > abs(a[j] - temp)) j = a[j];
            else{
                if (j > temp) --j;
                else ++j;
            }
            ++m;
        }
        printf("%d ", m);
    }
    return 0;
}
