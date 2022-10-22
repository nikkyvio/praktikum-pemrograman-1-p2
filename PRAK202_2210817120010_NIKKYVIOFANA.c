#include <stdio.h>
int main()
{
    float nilai1, nilai2, hasil;
    printf("masukkan nilai pertama: ");scanf("%f", &nilai1);
    printf("masukkan nilai kedua: ");scanf("%f", &nilai2);
    hasil = nilai1+nilai2;
    printf("hasil dari penjumlahan nilai pertama \"%.f\" dan nilai kedua \"%.1f\" adalah \"%.2f\"", nilai1,nilai2,hasil);
    return 0;
}
