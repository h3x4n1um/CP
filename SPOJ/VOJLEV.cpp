#include <bits/stdc++.h>

using namespace std;

double n;

int main(){
    cin >> n;
    cout << ((log(n) + log(2)) / log(1.07)) + 1;
}
