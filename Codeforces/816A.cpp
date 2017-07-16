#include <bits/stdc++.h>

using namespace std;

int hh, mm, ans;

bool check(){
    int temp = mm;
    temp = temp % 10 * 10 + temp / 10;
    return temp == hh;
}

int main(){
    scanf("%d%*1s%d", &hh, &mm);
    while (!check()){
        ++mm;
        if (mm == 60){
            mm = 0;
            ++hh;
            if (hh == 24) hh = 0;
        }
        ++ans;
    }
    printf("%d", ans);
    return 0;
}
