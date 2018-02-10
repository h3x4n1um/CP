#include <bits/stdc++.h>

using namespace std;

int n;
int a[10005][10005];

void printMatrix(){
    for (int i = 1; i <= n; ++i){
        for (int j = 1; j <= n; ++j){
            printf("%4d", a[i][j]);
        }
        puts("");
    }
    puts("");
}

int main(){
    freopen("bai2.inp", "r", stdin);
    scanf("%d", &n);
    int k = 0, sum = 1;
    while(sum < n * n){
        int i = k + 1, j = 1;
        //Horizon
        for (j = 1 + k; j < n - k; ++j){
            a[i][j] = sum;
            ++sum;
        }
        //Vertical
        for (i = 1 + k; i < n - k; ++i){
            a[i][j] = sum;
            ++sum;
        }
        //Reverse horizon
        for (j = n - k; j > 1 + k; --j){
            a[i][j] = sum;
            ++sum;
        }
        //Reverse vertical
        for (int i = n - k; i > 1 + k; --i){
            a[i][j] = sum;
            ++sum;
        }
        ++k;
    }
    if (n % 2 == 1) a[(int) round((float) n / 2)][(int) round((float) n / 2)] = sum;
    printMatrix();
    return 0;
}
