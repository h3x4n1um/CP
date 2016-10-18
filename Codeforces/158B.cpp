#include <bits/stdc++.h>

using namespace std;

int n, ans;
vector <int> group(5);

int main(){
    int temp;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i){
        scanf("%d", &temp);
        ++group[temp];
    }
    ans += group[4];
    ans += group[2] / 2;
    if (group[1] > group[3]){
        ans += group[3];
        group[1] -= group[3];
        if (group[2] % 2 != 0){
            group[1] -= 2;
            --group[2];
            ++ans;
        }
        ans += (int) ceil((float) group[1] / 4);
    }
    else{
        ans += group[1];
        group[3] -= group[1];
        ans += group[3];
        if (group[2] % 2 != 0){
            --group[2];
            ++ans;
        }
    }
    printf("%d", ans);
    return 0;
}
