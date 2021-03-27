#include <stdio.h>
/* 
Mencetak angka berurutan rapih
dalam bentuk kolom dan baris
-----------
output
xxxxxx
xxxxxx
xxxxxx
xxxxxx
xxxxxx
 */
int main() {
    /* looping dari 1 sampai 30 */
    for (int i=1; i<=30; i++) {
        /* cetak huruf x, bisa diganti dengan apapun */
        printf("x");
        /* baris dibawah ini akan menentukan jumlah kolom */
        /* Jika bilangan i dibagi dengan 6 tidak bersisa,
        atau hasilnya 0, maka cetak enter (baris baru) */
        if (i % 6 == 0) {
            printf("\n");
        }
    }
    return 0;
}

