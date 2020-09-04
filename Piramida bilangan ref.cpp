#include <iostream>
using namespace std;

void solve() {
    int N, M;
    cin >> N >> M;
    unsigned long long mod = 1e9 + 7, sum = 1;
    for (int i = 2; i <= N; i++) {
        sum += ((2*i + (i - 1)*M)%mod);
        double y = i;
        y = y/2;
        sum = sum * y;
    }
    cout << sum << '\n';
}

int main() {
    solve();
}
