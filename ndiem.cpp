#include <bits/stdc++.h>

using namespace std;

int ans;

int main(){
    for (int i = -1000; i <= 1000; ++i){
        for (int j = -1000; j <= 1000; ++j){
            if (i * i + j * j == 1000 * 1000) ++ans;
        }
    }
    printf("%d", ans);
    return 0;
}
