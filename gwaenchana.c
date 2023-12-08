/*

JUDUL : PROGRAM PEMESANAN MAKANAN

DEKLARASI :

ALGORITMA :


*/


//Kumpulan Library
#include <stdio.h>
#include <time.h>


//Prosedur
void cls() {
    system("cls");
}

void greeting() {
    printf("================================= \n");
    printf("        SELAMAT DATANG DI         \n");
    printf("      GWAENCHANA RESTAURANT       \n");
    printf("================================= \n");
}

void thanks() {
    printf("Terima kasih telah (...). Sampai jumpa!");
}


//Variabel Global
int option_K, option_MA, option_MI, option_D;
char choice;

//Fungsi Hitung
//...


//Fungsi Main
int main() {

    do {
        cls();

    greeting();

    printf("======================= \n");
    printf(" MAU PESAN APA? \n");
    printf("======================= \n");
    printf("1. MAKANAN \n");
    printf("2. MINUMAN \n");
    printf("3. DESSERT \n");
    printf("======================= \n");
    printf("Silahkan masukkan pilihan Anda : \n");
    scanf("%d", option_K);


    } while ;


    return 0;
}


//Billing to txt
//...