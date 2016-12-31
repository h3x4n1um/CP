#include <bits/stdc++.h>

using namespace std;

pair <int, int> cord;

int main(){
    for (int i = 1; i <= 5; ++i){
        for (int j = 1; j <= 5; ++j){
            int temp;
            scanf("%d", &temp);
            if (temp == 1){
                cord = make_pair(i, j);
            }
        }
    }
    printf("%d", abs(cord.first - 3) + abs(cord.second - 3));
    return 0;
}
