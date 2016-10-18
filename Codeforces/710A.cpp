#include <bits/stdc++.h>

char c;
int d;

int main(){
    scanf("%c%d", &c, &d);
    if (d == 8 || d == 1){
        if (c == 'a' || c == 'h') printf("3");
        else printf("5");
    }
    else{
        if (c == 'a' || c == 'h') printf("5");
        else printf("8");
    }
    return 0;
}
