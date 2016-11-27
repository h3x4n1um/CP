#include <bits/stdc++.h>

using namespace std;

int x;

int main(){
    int temp = 0, cnt = 0;
    scanf("%d", &x);
    while (temp < x){
        ++cnt;
        temp = (cnt * (cnt + 1)) / 2;
    }
    if (temp == x) printf("YES");
    else printf("NO");
    return 0;
}
