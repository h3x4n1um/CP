#include <bits/stdc++.h>

using namespace std;

long long int n;

int main(){
    cin >> n;
    long long int tempcount = 1, temp = 1;
    while (temp <= n){
        temp += tempcount;
        ++tempcount;
    }
    cout << n - (temp - tempcount);
    return 0;
}
