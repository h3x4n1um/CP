#include <bits/stdc++.h>

using namespace std;

int n, g, k = 1;
vector <int> a;

int main(){
    int temp;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i){
        scanf("%d", &temp);
        a.push_back(temp);
    }
    sort(a.begin(), a.end());
    temp = 1;
    for (int i = 0; i < n - 1; ++i){
        if (a[i] == a[i + 1]) ++temp;
        else{
            if (temp > g) g = temp;
            ++k;
        }
    }
    printf("%d %d", g, k);
    return 0;
}
