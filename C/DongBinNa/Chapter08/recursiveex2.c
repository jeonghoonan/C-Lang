/**
 * 조합 : 서로 다른 n개의 물건에서 순서를 생각하지 않고 r 개를 택할때 이것은 n개에서 r개를 택하는 조합이라고 하고 이 조합의 수를 기호롤 nCr로 나타낸다 
 */ 

#include <stdio.h>

int nCr(int n, int r) {
    if (r == 0 || r == n) {
        return 1;
    } else {
        return nCr(n - 1, r - 1) + nCr(n - 1, r);
    }
}

int main(void) {
    int n, r;
    scanf("%d %d", &n, &r);
    printf("%d", nCr(n, r));
    return 0;
}