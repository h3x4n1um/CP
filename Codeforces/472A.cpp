#include <bits/stdc++.h>

using namespace std;

int n;

bool is_composite(int q){
    if (q < 2) return false;
    for (int i = 2; i <= (int) sqrt(q); ++i){
        if (q % i == 0) return true;
    }
    return false;
}

int main(){
    scanf("%d", &n);
    int temp = n / 2;
    while (!is_composite(temp) || !is_composite(n - temp)) --temp;
    printf("%d %d", temp, n - temp);
    return 0;
}
