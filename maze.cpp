#include <iostream>
using namespace std;

int maze(int n, int m) {
    if (m == 1 || n == 1) return 1;
    else return maze(n,m-1) +  maze(n-1,m);
}

int main() {
    int N, M;
    cin >> N >> M;
    cout << maze(N, M) << endl;
}
