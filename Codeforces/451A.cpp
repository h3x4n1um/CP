#include <bits/stdc++.h>

using namespace std;

int n, m;

int main(){
    scanf("%d%d", &n, &m);
    if (min(n, m) % 2 == 1) printf("Akshat");
    else printf("Malvika");
    return 0;
}
