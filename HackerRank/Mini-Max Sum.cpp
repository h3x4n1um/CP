#include <bits/stdc++.h>

using namespace std;

vector <long> a;

int main(){
    for (int i = 0; i < 5; ++i){
        long temp;
        scanf("%ld", &temp);
        a.push_back(temp);
    }
    sort(a.begin(), a.end());
    printf("%ld %ld", a[0] + a[1] + a[2] + a[3], a[1] + a[2] + a[3] + a[4]);
    return 0;
}
