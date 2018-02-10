#include <bits/stdc++.h>

using namespace std;

int n;
vector <int> a;

int main(){
    freopen("queue.inp", "r", stdin);
    freopen("queue.out", "w", stdout);
    scanf("%d", &n);
    for (int i = 0; i < n; ++i){
        int temp;
        scanf("%d", &temp);
        a.push_back(temp);
    }
    for (int i = 0; i < a.size(); ++i){
        int pos =  i, j = i + 1;
        for (int j = i + 1; j < a.size(); ++j){
            if (a[i] > a[j]) pos = j;
        }
        printf("%d ", pos - i - 1);
    }
    return 0;
}
