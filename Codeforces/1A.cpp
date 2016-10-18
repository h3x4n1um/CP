#include <iostream>

using namespace std;

unsigned long long int n, m, a;

int main(){
    cin >> n >> m >> a;
    cout << (unsigned long long int) ceil((double) n / a) * (unsigned long long int) ceil((double) m / a);
    return 0;
}
