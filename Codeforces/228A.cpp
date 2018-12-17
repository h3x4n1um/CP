#include <bits/stdc++.h>

using namespace std;

int ans;
map <int, bool> a;

int main(){
    for (int i = 0; i < 4; ++i){
        int temp;
        scanf("%d", &temp);
        if (a[temp]) ++ans;
        else a[temp] = true;
    }
    printf("%d", ans);
    return 0;
}
