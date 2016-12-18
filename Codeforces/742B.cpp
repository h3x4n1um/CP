#include <bits/stdc++.h>

using namespace std;

int n, x, ans;
vector <int> a;

int main(){
    scanf("%d%d", &n, &x);
    for (int i = 0; i < n; ++i){
        int temp;
        scanf("%d", &temp);
        a.push_back(temp);
    }

    for (int i = 0; i < a.size(); ++i){
        for (int j = i + 1; j < a.size(); ++j){
            int temp = a[i] ^ a[j];
            if (temp == x) ++ans;
        }
    }

    printf("%d", ans);
    return 0;
}
