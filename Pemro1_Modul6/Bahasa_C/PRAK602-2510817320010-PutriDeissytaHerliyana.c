#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int zetsu[100];  
    int hasil[100];  

    for (int i = 0; i < n; i++) {
        scanf("%d", &zetsu[i]);
    }

    for (int i = 0; i < n; i++) {
        hasil[i] = zetsu[i] * (i + 1);
    }

    for (int i = 0; i < n; i++) {
        printf("%d ", hasil[i]);
    }

    return 0;
}
