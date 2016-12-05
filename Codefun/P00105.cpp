#include <bits/stdc++.h>

using namespace std;

int x;

int main(){
    scanf("%d", &x);

    if (x % 400 == 0 || (x % 4 == 0 && x % 100 != 0)) printf("1");
    else printf("0");

    return 0;
}
