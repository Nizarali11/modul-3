#include <stdio.h>
int main()
{
char nama[50], nim[50], tempat[50], hari[50], bulan[50],
tahun[50], hobi[50], alamat [50], hp[50], paralel[50];
printf ("Nama : ");
gets(nama);
printf ("NIM : ");
gets(nim);
printf ("Kelas Paralel : ");
gets(paralel);
printf ("Tempat/Tanggal Lahir : ");
scanf ("%s %s %s %s", &tempat, &hari, &bulan, &tahun);
getchar();
printf ("Alamat : ");
gets(alamat);
printf ("Hobby : ");
gets (hobi);
printf ("No. Hp : ");
gets (hp);
printf ("\n");
printf ("Nama : %s\n", nama);
printf ("NIM : %s\n", nim);
printf ("Kelas Paralel : %s\n", paralel);
printf ("Tempat/Tanggal Lahir : %s / %s - %s - %s\n",
tempat, hari, bulan, tahun);
printf ("Alamat : %s\n", alamat);
printf ("Hobby : %s\n", hobi);
printf ("No. Hp : %s\n", hp);
return 0;
}