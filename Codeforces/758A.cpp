#include <bits/stdc++.h>

using namespace std;

int n;
int _max, sum;

int main(){
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i){
        int temp;
        scanf("%d", &temp);
        _max = max(_max, temp);
        sum += temp;
    }
    printf("%d", _max * n - sum);
    return 0;
}
