//Bagus Romadon
//NIM : 202310370311251
#include <stdio.h>

int main() {
    char ulang;

    do {
        int choice;
        printf("Pilih operasi suhu :\n");
        printf("1. Celcius ke Reamur\n");
        printf("2. Celcius ke Fahrenheit\n");
        printf("3. Celcius ke Kelvin\n");
        printf("Pilihan Anda: ");
        scanf("%d", &choice);
        fflush(stdin);

        switch (choice) {
            case 1:
                {
                    double celcius, reamur;
                    printf("Masukan suhu celcius yang akan di konversi ke reamur: ");
                    scanf("%lf", &celcius);
                    reamur = (4.0 / 5.0) * celcius;
                    printf("Suhu dalam Reamur: %.2lf Reamur\n", reamur);
                    break;
                }
            case 2:
                {
                    double celcius, fahrenheit;
                    printf("Masukan Suhu Celcius yang akan di konversikan ke Fahrenheit : ");
                    scanf("%lf", &celcius);
                    fahrenheit = (celcius * 9.0 / 5.0) + 32;
                    printf("Suhu dalam Fahrenheit: %.2lf Fahrenheit\n", fahrenheit);
                    break;
                }
            case 3:
               {
                    double celcius, kelvin;
                    printf("Masukan suhu celcius yang akan di konversikan ke Kelvin : ");
                    scanf("%lf", &celcius);
                    kelvin = celcius + 273.15;
                    printf("Suhu dalam Kelvin: %.2lf Kelvin\n", kelvin);
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
