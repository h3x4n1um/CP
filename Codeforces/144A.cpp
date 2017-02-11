#include <bits/stdc++.h>

using namespace std;

int n, ans;
vector <int> a;
pair <int, int> max_a = make_pair(0, -1), min_a = make_pair(101, -1);

int main(){
    scanf("%d", &n);
    for (int i = 0; i < n; ++i){
        int temp;
        scanf("%d", &temp);
        if (temp == max_a.first) max_a.second = min(i, max_a.second);
        if (temp > max_a.first){
            max_a.first = temp;
            max_a.second = i;
        }
        if (temp == min_a.first) min_a.second = max(i, min_a.second);
        if (temp < min_a.first){
            min_a.first = temp;
            min_a.second = i;
        }
        a.push_back(temp);
    }

    while(max_a.second != 0){
        swap(a[max_a.second], a[max_a.second - 1]);
        if (max_a.second -1 == min_a.second) ++min_a.second;
        --max_a.second;
        ++ans;
    }
    while(min_a.second != a.size() - 1){
        swap(a[min_a.second], a[min_a.second + 1]);
        ++min_a.second;
        ++ans;
    }

    printf("%d", ans);
    return 0;
}
