#include <iostream>
using namespace std;

int ans = 0;
int row[5][5];
int col[5][5];
int block[5][5];

void dfs(int n) {
    if (n > 16) {
        ans++;
        return;
    }
    int rid = (n - 1) / 4 + 1;
    int cid = (n - 1) % 4 + 1;
    int bid = (rid - 1) / 2 * 2 + (cid - 1) / 2 + 1;
    for (int i = 1; i <= 4; i++) {
        if (row[rid][i] == 0 && col[cid][i] == 0 && block[bid][i] == 0) {
            row[rid][i] = 1;
            col[cid][i] = 1;
            block[bid][i] = 1;
            dfs(n + 1);
            row[rid][i] = 0;
            col[cid][i] = 0;
            block[bid][i] = 0;
        }
    }
}

int main() {
    dfs(1);
    cout << ans << endl;
    return 0;
}