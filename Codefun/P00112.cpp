#include <bits/stdc++.h>

using namespace std;

string x, y;

int main(){
    cin >> x >> y;

    if (x[0] == '0') {
        if (y[0] == '-') printf("%d %d", 3, 4);
        else if (y[0] == '0') printf("%d %d %d %d", 1, 2, 3, 4);
        else printf("%d %d", 1, 2);
    }
    else if (x[0] == '-'){
        if (y[0] == '-') printf("%d", 3);
        else if (y[0] == '0') printf("%d %d", 2, 3);
        else printf("%d", 2);
    }
    else{
        if (y[0] == '-') printf("%d", 4);
        else if (y[0] == '0') printf("%d %d", 1, 4);
        else printf("%d", 1);
    }
    return 0;
}
