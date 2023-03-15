#include <iostream>
using namespace std;
int n, k, P, C;
int main() {
    scanf("%d %d", &n, &k);
    for (int i = 0; i < n; i++) {
        scanf("%d", &P);
        if (P + k <= 5) {
            C++;
        }
    }
    printf("%d", C/3);
    return 0;
}
