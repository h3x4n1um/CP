#include <bits/stdc++.h>

using namespace std;

string a, b, ans;

int main(){
    int du = 0;
    cin >> a >> b;
    if (a.size() > b.size()) b.insert(0, a.size() - b.size(), '0');
    if (a.size() < b.size()) a.insert(0, b.size() - a.size(), '0');
    for (int i = a.size() - 1; i >= 0; --i){
        ostringstream output;
        int temp = (a[i] - '0') + (b[i] - '0') + du;
        if (temp >= 10){
            temp = temp - 10;
            du = 1;
        }
        output << temp;
        ans = output.str() + ans;
    }
    if (du == 1) printf("%d", du);
    cout << ans;
    return 0;
}
