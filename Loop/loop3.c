#include <stdio.h>
/* 
Looping bersarang - nested loop

Mencetak bintang 
dalam bentuk piramid / segitiga
-----------
output
*
**
***
****
*****
******
*******
********
*********
**********
 */
int main() {
    /* Baris ini menentukan jumlah baris */
    for (int i=1; i<=10; i++) {

        /* looping di dalam loop ini akan menentukan jumlah kolom 
           Kondisi nya adalah "cetak * sebanyak variabel i" 
           Sehingga jika nilai i makin besar (baris nya makin bawah),
           maka * yang dicetak akan semakin banyak.
           Hal ini menghasilkan bentuk segitiga
        */
        for (int j=1; j<=i; j++) {
            printf("*");
        }

        /* satu baris ini juga penting
           setelah mencetak * sejumlah varabel i,
           maka harus cetak enter (baris baru), agar segitiga terbentuk
         */
        printf("\n");
    }
    return 0;
}
