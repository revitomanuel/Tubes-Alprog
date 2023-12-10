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
    printf("=================================\n");
    printf("        SELAMAT DATANG DI        \n");
    printf("      GWAENCHANA RESTAURANT      \n");
    printf("=================================\n\n");
}

void thanks() {
    printf("Terima kasih telah (...). Sampai jumpa!");
}


//Variabel Global
int option_K, option_MA, option_MI, option_D;
int jumlah;
float ppn;
char choice;

//Fungsi Hitung
//...


//Fungsi Main
int main() {

    do {
        cls();

    greeting();

    printf("+====================+\n");
    printf("|   MAU PESAN APA?   |\n");
    printf("+===+================+\n");
    printf("| 1 | MAKANAN        |\n");
    printf("| 2 | MINUMAN        |\n");
    printf("| 3 | DESSERT        |\n");
    printf("+===+================+\n");
    printf("Silahkan masukkan pilihan Anda : ");
    scanf("%d", &option_K);
    printf("\n");

        if (option_K == 1) {
            printf("==================================== \n");
            printf("        M E N U  M A K A N A N       \n");
            printf("==================================== \n");
            printf("    \n");
            printf("    \n");
            printf("    \n");
            printf("    \n");
            printf("    \n");
            printf("    \n");
            printf("Silahkan masukkan pilihan Anda : ");
            scanf("%d", &option_D);
            printf("Masukkan jumlah : ");
            scanf("%d", &jumlah);
        }
        else if (option_K == 2) {
            printf("========================================= \n");
            printf("        M E N U  M I N U M A N            \n");
            printf("========================================= \n");
            printf("| NO |    MINUMAN      |      HARGA      |\n");
            printf("+----+-----------------+-----------------+\n");
            printf("| 1  | Soju            | Rp        75.000|\n");
            printf("| 2  | Makgeolli       | Rp        65.000|\n");
            printf("| 3  | Sikhye          | Rp        16.000|\n");
            printf("| 4  | Yuja-cha        | Rp       169.000|\n");
            printf("| 5  | Mujigae         | Rp        15.000|\n");
            printf("| 6  | Sujeonggwa      | Rp        80.000|\n");
            printf("| 7  | Bokbunja-ju     | Rp       150.000|\n");
            printf("| 8  | Teh             | Rp        50.000|\n");
            printf("| 9  | Chamisul        | Rp        70.000|\n");
            printf("| 10 | Omija Tea       | Rp       300.000|\n");
            printf("+====+=================+=================+\n");
            printf("Silahkan masukkan pilihan Anda : ");
            scanf("%d", &option_D);
            printf("Masukkan jumlah : ");
            scanf("%d", &jumlah);
        }
        else if (option_K == 3) {
            printf("+========================================+\n");
            printf("|         M E N U  D E S S E R T         |\n");
            printf("+====+=================+=================+\n");
            printf("| NO |     DESSERT     |      HARGA      |\n");
            printf("+----+-----------------+-----------------+\n");
            printf("| 1  | Bungeoppang     | Rp        10.000|\n");
            printf("| 2  | Patbingsoo      | Rp        25.000|\n");
            printf("| 3  | Hotteok         | Rp         8.000|\n");
            printf("| 4  | Hwachae         | Rp        30.000|\n");
            printf("| 5  | Jeonggwa        | Rp        15.000|\n");
            printf("+====+=================+=================+\n");
            printf("Silahkan masukkan pilihan Anda : ");
            scanf("%d", &option_D);
            printf("Masukkan jumlah : ");
            scanf("%d", &jumlah);
        }
        else {
            printf("Mohon maaf, input yang Anda masukkan tidak cocok dengan opsi yang tersedia.\n\n");
            while (getchar() != '\n');
        }

    } while (1);

    return 0;
}


//Billing to txt
//...
