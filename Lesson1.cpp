#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
    int n  = 0;
    int ttl = 0;
    const int maxn = 10010;
    int a[maxn] = {30000};
    int b[maxn] = {30000};
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a, a + n);
    int head_a = 0, head_b = 0, tail_b = 0;
    for (int i = 0; i < n - 1; i++) {
        int tmp = a[head_a] < b[head_b] ? a[head_a++] : b[head_b++];
        tmp += a[head_a] < b[head_b] ? a[head_a++] : b[head_b++];
        ttl += tmp;
        b[tail_b++] = tmp;
    }
    cout << ttl << endl;
    return 0;
}