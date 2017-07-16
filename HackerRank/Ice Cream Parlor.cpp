#include <bits/stdc++.h>

using namespace std;

int t;

int main(){
    scanf("%d", &t);
    while(t-- > 0){
        int n, m;
        vector <int> a;
        scanf("%d%d", &m, &n);
        for (int i = 0; i < n; ++i){
            int temp;
            scanf("%d", &temp);
            a.push_back(temp);
        }
        for (int i = 0; i < a.size(); ++i){
            bool stop = false;
            for (int j = i + 1; j < a.size(); ++j){
                if (a[i] + a[j] == m){
                    printf("%d %d\n", i + 1, j + 1);
                    stop = true;
                    break;
                }
            }
            if (stop) break;
        }
    }
    return 0;
}
