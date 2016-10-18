#include <bits/stdc++.h>

using namespace std;

const int d[]{2, 3, 5, 7};

string s;
int temp;

int main(){
    for (int i = 0; i < 4; ++i){
        printf("%d\n", d[i]);
        fflush(stdout);
        cin >> s;
        if (s == "yes") ++temp;
        if (temp > 1){
            printf("composite");
            fflush(stdout);
            return 0;
        }
    }
    printf("prime");
    fflush(stdout);
    return 0;
}
