#include <stdio.h>
#include <string.h>

int main() {
char nama[100];

printf("Masukkan nama Anda: ");
fgets(nama, sizeof(nama), stdin);

nama[strcspn(nama, "\n")] = 0;

printf("Selamat Pagi, %s\n", nama);
printf("Selamat Siang, %s\n", nama);
printf("Selamat Malam, %s\n", nama);

return 0;
}
