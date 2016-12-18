#include <bits/stdc++.h>

using namespace std;

int n, ans, sum;
vector <int> a;

int main(){
    scanf("%d", &n);
    for (int i = 0; i < n; ++i){
        int temp;

        scanf("%d", &temp);
        a.push_back(temp);
        sum += temp;
    }

    sort(a.begin(), a.end());
    for (int i = 0; i < a.size(); ++i){
        ans += sum;
        sum -= a[i];
        if (i > 0) ans += a[i - 1];
    }

    printf("%d", ans);
    return 0;
}
