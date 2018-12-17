#include <bits/stdc++.h>

using namespace std;

const int magic[] = {60, 90, 108, 120, 135, 140, 144, 150, 156, 160, 162, 165, 168, 170, 171, 172, 174, 175, 176, 177, 178, 179};

int t;

bool cmp(int q){
    for (int i = 0; i < 22; ++i){
        if (q == magic[i]) return true;
    }
    return false;
}

int main(){
    #ifndef ONLINE_JUDGE
        freopen("270A.inp", "r", stdin);
    #endif // ONLINE_JUDGE
    scanf("%d", &t);
    while(t-->0){
        int angle;
        scanf("%d", &angle);
        if (cmp(angle)) puts("YES");
        else puts("NO");
    }
    return 0;
}
