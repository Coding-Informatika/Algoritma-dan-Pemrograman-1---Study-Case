#include <stdio.h>
/* 
Mencetak angka berurutan rapih
dalam bentuk kolom dan baris
-----------
output
   1   2   3
   4   5   6
   7   8   9
  10  11  12
  13  14  15
  16  17  18
  19  20  21
  22  23  24
  25  26  27
  28  29  30
 */
int main() {
    /* looping dari 1 sampai 30 */
    for (int i=1; i<=30; i++) {
        /* membuat padding agar output rapi 
        padding sebanyak 4 digit */
        printf("%4d", i);
        /* baris ini akan menentukan jumlah kolom */
        if (i % 3 == 0) {
            printf("\n");
        }
    }
   return 0;
}