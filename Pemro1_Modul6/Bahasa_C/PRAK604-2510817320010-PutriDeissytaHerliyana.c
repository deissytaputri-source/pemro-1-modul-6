#include <stdio.h>
#include <string.h>

int main() {
    char kode[200], pesan[200];
    char hasil[200];
    int bintang = 0, pagar = 0;

    fgets(kode, sizeof(kode), stdin);
    fgets(pesan, sizeof(pesan), stdin);

    kode[strcspn(kode, "\n")] = '\0';
    pesan[strcspn(pesan, "\n")] = '\0';

    if (strlen(kode) != strlen(pesan)) {
        printf("Panjang kalimat berbeda, pesan palsu\n");
        return 0;
    }

    for (int i = 0; i < strlen(kode); i++) {
        if (kode[i] == pesan[i]) {
            hasil[i] = '*';
            bintang++;
        } else {
            hasil[i] = '#';
            pagar++;
        }
    }

    hasil[strlen(kode)] = '\0';

    printf("%s\n", hasil);
    printf("* = %d\n", bintang);
    printf("# = %d\n", pagar);

    if (bintang >= pagar)
        printf("Pesan Asli\n");
    else
        printf("Pesan Palsu\n");

    return 0;
}
