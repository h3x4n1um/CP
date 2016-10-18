#include <bits/stdc++.h>

int ans = 1;

int main(){
    #ifndef ONLINE_JUDGE
        freopen("96A.inp", "r", stdin);
    #endif // ONLINE_JUDGE
    int player, prev_player;
    scanf("%1d", &prev_player);
    while (scanf("%1d", &player) != EOF){
        if (player != prev_player) ans = 1;
        else ++ans;
        if (ans >= 7){
            printf("YES");
            return 0;
        }
        prev_player = player;
    }
    printf("NO");
    return 0;
}
