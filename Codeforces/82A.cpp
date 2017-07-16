#include <bits/stdc++.h>

using namespace std;

string s[] = {"Sheldon", "Leonard", "Penny", "Rajesh", "Howard"};
int n, cnt = 1, k = 1, ans;

int main(){
    #ifndef ONLINE_JUDGE
        freopen("82A.inp", "r", stdin);
    #endif // ONLINE_JUDGE
    scanf("%d", &n);
    while(cnt + k * 5 <= n){
        cnt += k * 5;
        k *= 2;
    }
    cnt += k - 1;
    while (cnt < n){
        cnt += k;
        ++ans;
    }
    cout << s[ans];
    return 0;
}
