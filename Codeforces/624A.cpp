#include <bits/stdc++.h>

using namespace std;

int main(){
    int d, l, v1, v2;
    scanf("%d%d%d%d", &d, &l, &v1, &v2);
    printf("%6f",(float) (l - d) / (v1 + v2));
    return 0;
}
