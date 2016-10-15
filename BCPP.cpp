#include <bits/stdc++.h>

using namespace std;

int r, l, dem;

bool check_phongphu(int b){
    int t = 1;
    for (int i = 2; i <= (int) sqrt(b); ++i){
        if (b % i == 0){
            if (i * i == b) t += i;
            else t+= i + (b / i);
        }
    }
    if (t > b) return true;
    return false;
}

int main(){
    scanf("%d%d", &l, &r);
    for (int i = l; i <= r; ++i){
        if (check_phongphu(i)) ++dem;
    }
    printf("%d", dem);
    return 0;
}
