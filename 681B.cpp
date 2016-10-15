#include <bits/stdc++.h>

using namespace std;

unsigned long long int n;

void recursion(unsigned long long int m){
    cout << m << endl;
    if (m == 0){
        printf("YES");
        exit(0);
    }
    if (m < 0) return;
    recursion(m - 1234567);
    recursion(m - 123456);
    recursion(m - 1234);
}

int main(){
    cin >> n;
    recursion(n);
    cout << n;
    printf("NO");
    return 0;
}
