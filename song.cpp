#include <bits/stdc++.h>

using namespace std;

int n, same;
vector <int> a(1501), b;

int main(){
    freopen("song.inp", "r", stdin);
    freopen("song.out", "w", stdout);
    scanf("%d", &n);
    for (int i = 0; i < n; ++i){
        int temp;
        scanf("%d", &temp);
        ++a[temp];
        b.push_back(temp);
        same = max(a[temp], same);
    }
    for (int i = 1; i <= 1500; ++i){
        if (a[i] == same) printf("%d\n", i);
    }
    return 0;
}
