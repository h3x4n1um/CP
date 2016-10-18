#include <bits/stdc++.h>

using namespace std;

const string l = "AbdHIMOopqTUVvWwXxY";
const string r = "AdbHIMOoqpTUVvWwXxY";

string s;

int main(){
    cin >> s;
    int left = 0, right = s.size() - 1;
    while(left <= right){
        int check = 0;
        for (int i = 0; i < l.size(); ++i){
            if (s[left] != l[i] && s[right] != r[i]) ++check;
            else if ((s[left] == l[i] && s[right] != r[i]) || (s[left] != l[i] && s[right] == r[i])){
                printf("NIE");
                return 0;
            }
        }
        if (check == l.size()){
            printf("NIE");
            return 0;
        }
        ++left;
        --right;
    }
    printf("TAK");
    return 0;
}
