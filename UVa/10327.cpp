#include <bits/stdc++.h>

using namespace std;

int N;

int main(){
    while (scanf("%d", &N) != EOF){
        vector <int> a;
        priority_queue <int> q;
        int ans = 0;
        for (int i = 0; i < N; ++i){
            int temp;
            scanf("%d", &temp);
            a.push_back(temp);
            q.push(temp);
        }
        while (!q.empty()){
            for (int i = 0; i < a.size(); ++i){
                int j = i;
                while (a[j] == q.top() && a[j] > a[j + 1] && j + 1 < a.size()){
                    swap(a[j], a[j + 1]);
                    ++j;
                    ++ans;
                }
            }
            q.pop();
        }
        printf("Minimum exchange operations : %d\n", ans);
    }
    return 0;
}
