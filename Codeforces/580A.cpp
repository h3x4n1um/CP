#include <bits/stdc++.h>

using namespace std;

int n, ans, temp_ans;
vector <int> a;

int main(){
    scanf("%d", &n);
    for (int i = 0; i < n; ++i){
        int temp;
        scanf("%d", &temp);
        a.push_back(temp);
    }
    a.push_back(-1000000007);
    for (int i = 1; i < a.size(); ++i){
        if (a[i - 1] <= a[i]) ++temp_ans;
        else{
            ans = max(ans, temp_ans);
            temp_ans = 0;
        }
    }
    printf("%d", ans + 1);
    return 0;
}
