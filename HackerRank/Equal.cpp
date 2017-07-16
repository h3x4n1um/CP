#include <bits/stdc++.h>

using namespace std;

int T;

int main(){
    scanf("%d", &T);
    while(T-- > 0){
        int n;
        vector <int> a;
        scanf("%d", &n);
        for (int i = 0; i < n; ++i){
            int temp;
            scanf("%d", &temp);
            a.push_back(temp);
        }
        sort(a.begin(), a.end());
        for (int i = 1; i < a.size(); ++i){
            if (a[i] > a[i - 1]){
                int temp = a[i] - a[i - 1];
            }
        }
    }
    return 0;
}
