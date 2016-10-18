#include <bits/stdc++.h>

int ans, n;
std::pair <int, int> temp;

void write(){
    if (ans + 15 >= 90) printf("%d", 90);
    else printf("%d", ans + 15);
    exit(0);
}

int main(){
    scanf("%d", &n);
    for (int i = 0; i < n; ++i){
        scanf("%d", &temp.second);
        if (temp.second - temp.first > 15) write();
        else{
            ans = temp.second;
            temp.first = temp.second;
        }
    }
    write();
}
