#include <bits/stdc++.h>

using namespace std;

int n, cnt_a, cnt_b;
int a[1005], b[1005];
bool check[1005];
vector <int> pos;

int main(){
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) scanf("%d", &a[i]);
    for (int i = 1; i <= n; ++i){
        scanf("%d", &b[i]);
        if (a[i] != b[i]) pos.push_back(i);
    }
    cerr << pos.size() << endl;
    for (int i = 1; i <= n; ++i){
        if (find(pos.begin(), pos.end(), i) == pos.end()) check[a[i]] = check[b[i]] = true;
    }
    for (int i = 1; i <= n; ++i){
        if (find(pos.begin(), pos.end(), i) != pos.end()){
            for (int j = 1; j <= n; ++j){
                if (!check[j]){
                    a[i] = j;
                    check[j] = true;
                    break;
                }
            }
        }
        printf("%d ", a[i]);
    }
    return 0;
}
