
//Bagus Romadon
//NIM : 202310370311251
#include <stdio.h>

int main() {
    char ulang;

    do {
        int choice;
        printf("Pilih operasi:\n");
        printf("1. Penambahan\n");
        printf("2. Perkalian\n");
        printf("3. Pengurangan\n");
        printf("4. Pembagian\n");
        printf("Pilihan Anda: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                {
                    int jumlah, i;
                    double hasil = 0;
                    printf("Mau melakukan pertambahan berapa angka? ");
                    scanf("%d", &jumlah);
                    for (i = 0; i < jumlah; i++) {
                        double angka;
                        printf("Masukkan angka ke-%d: ", i + 1);
                        scanf("%lf", &angka);
                        hasil += angka;
                    }
                    printf("Hasil penambahan adalah: %lf\n", hasil);
                    break;
                }
            case 2:
                {
                    int jumlah, i;
                    double hasil = 1; // Inisialisasi hasil dengan 1 untuk operasi perkalian
                    printf("Mau melakukan perkalian berapa angka? ");
                    scanf("%d", &jumlah);
                    for (i = 0; i < jumlah; i++) {
                        double angka;
                        printf("Masukkan angka ke-%d: ", i + 1);
                        scanf("%lf", &angka);
                        hasil *= angka; // Lakukan perkalian
                    }
                    printf("Hasil perkalian adalah: %lf\n", hasil);
                    break;
                }
            case 3:
                {
                    double angka1, angka2, hasil;
                    printf("Masukkan angka pertama: ");
                    scanf("%lf", &angka1);
                    printf("Masukkan angka kedua: ");
                    scanf("%lf", &angka2);
                    hasil = angka1 - angka2;
                    printf("Hasil pengurangan adalah: %lf\n", hasil);
                    break;
                }
            case 4:
                {
                    double angka1, angka2, hasil;
                    printf("Masukkan angka pembilang: ");
                    scanf("%lf", &angka1);
                    printf("Masukkan angka penyebut: ");
                    scanf("%lf", &angka2);
                    if (angka2 != 0) {
                        hasil = angka1 / angka2;
                        printf("Hasil pembagian adalah: %lf\n", hasil);
                    } else {
                        printf("Pembagian oleh nol tidak diizinkan.\n");
                    }
                    break;
                }
            default:
                printf("Pilihan tidak valid.\n");
        }

        printf("Apakah ingin menghitung lagi (y/t)? ");
        scanf(" %c", &ulang);
    } while (ulang == 'y' || ulang == 'Y');

    printf("Program selesai.\n");
    return 0;
}
