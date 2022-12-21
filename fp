#include <iostream>
#include<stdio.h>
#include<conio.h>
#include<io.h>
#include<math.h>
int main()
{

int kamar;
FILE *frs;
printf("======================================\n");
printf("           Pemesanan Kamar            \n");
printf("======================================\n");
printf("Anda ingin memesan kamar : \n");
printf("\n1. Kamar VVIP\n2. Kamar VIP\n3. General\n\n");
printf("Masukkan pilihan Anda : ");
kamar = getch();

int total;
int vvip=3, vip=2, gen=1;
int hari;
char setuju;


switch (kamar)
{
case '1':
printf("\nAnda telah memilih kamar VVIP\n");
printf("Harga sewa kamar Rp 3.000.000,00 @hari\n");
printf("Apakah Anda setuju? (Y/N)\n");
setuju = getch();
switch (setuju)
{
case 'y':
frs = fopen("zzz.txt","a+");
printf("\nBerapa hari hari Pasien dirawat : \n");
scanf("%d",&hari);
total=hari*vvip;
printf("\nTotal biaya yang harus dibayar : %d juta",total);
fprintf(frs,"\nAnda telah memilih kamar VIP\nHarga sewa kamar Rp 3.000.000,00 @hari\nselama %d hari\ndengan biaya %d juta rupiah\n",hari,total);
fclose (frs);
getch();
return 0;
break;

case 'n':
printf("Maaf ya..");
break;
};
break;

case '2':
printf("\nAnda telah memilih kamar VIP\n");
printf("Harga sewa kamar Rp 2.000.000,00 @hari\n");
printf("Apakah Anda setuju? (Y/N)\n");
setuju = getch();
switch (setuju)
{
case 'y':
frs = fopen("zzz.txt","a+");
printf("\nBerapa hari hari Pasien dirawat : \n");
scanf("%d",&hari);
total=hari*vip;
printf("\nTotal biaya yang harus dibayar : %d juta",total);
fprintf(frs,"\nAnda telah memilih kamar VIP\nHarga sewa kamar Rp 2.000.000,00 @hari\nselama %d hari\ndengan biaya %d juta rupiah\n",hari,total);
fclose (frs);
getch();
return (0);
break;

case 'n':
printf("Maaf ya..");
break;
};
break;

case '3':
printf("\nAnda telah memilih kamar General\n");
printf("Harga sewa kamar Rp 1.000.000,00 @hari\n");
printf("Apakah anda setuju? (Y/N)\n");
setuju = getch();
switch (setuju)
{
case 'y':
frs = fopen("zzz.txt","a+");
printf("\nBerapa hari pasien dirawat : ");
scanf("%d",&hari);
total =hari*gen;
printf("\nTotal biaya yang harus dibayar : %d juta",total);
fprintf(frs,"\nAnda telah memilih kamar VIP\nHarga sewa kamar Rp 1.000.000,00 @hari\nselama %d hari\ndengan biaya %d juta rupiah\n",hari,total);
getch();
fclose (frs);
return (0);
break;

case 'n':
printf("Maaf Silahkan Anda Keluar..");
break;
};
break;

}getch();

}
