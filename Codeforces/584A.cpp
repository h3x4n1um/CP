#include <bits/stdc++.h>

using namespace std;

const string magic = "2520";

int t, n;

int main(){
    scanf("%d%d", &n, &t);
    if (n <= 4){
        for (int i = pow(10, n - 1); i < pow(10, n); ++i){
            if (i % t == 0){
                printf("%d", i);
                return 0;
            }
        }
        printf("%d", -1);
    }
    else{
        cout << magic;
        for (int i = 1; i <= n - magic.size(); ++i) cout << "0";
    }
    return 0;
}
