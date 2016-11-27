#include <bits/stdc++.h>

using namespace std;

vector <int> a;

int main(){
    for (int i = 0; i < 4; ++i){
        int temp;
        scanf("%d", &temp);
        a.push_back(temp);
    }
    sort(a.begin(), a.end());
    for (int i = 1; i < 4; ++i){
        if (a[i] > a[i - 1]){
            printf("%d", a[i]);
            break;
        }
    }
    return 0;
}
