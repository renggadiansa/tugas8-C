#include <stdio.h>
#include <limits.h>
#include <math.h>


int hitungBulan(float biayaAwal, float setoranBulanan, float kenaikanTahunan) {
    int bulan = 0;
    while (biayaAwal > 0) {
        biayaAwal += biayaAwal * (kenaikanTahunan / 100.0);
        biayaAwal -= setoranBulanan * 1000000; // Mengubah setoranBulanan ke dalam jutaan rupiah
        bulan++;
    }
    return bulan;
}

int main() {
    //1
//    char karakter;
//
//    printf("Masukkan karakter: ");
//
//    while (1) {
//        karakter = getchar();
//
//        if (karakter == 'X') {
//            break;
//        }
//
//        putchar(karakter);
//    }
//    printf("\nProgram selesai.\n");

    //2
//    char lanjut;
//    int bilangan, total = 0;
//    int bilangan_ke = 1;
//
//    while (1) {
//        printf("Masukkan bilangan ke-%d: ", bilangan_ke);
//        scanf("%d", &bilangan);
//
//        total += bilangan;
//        bilangan_ke++;
//
//        printf("Mau memasukkan data lagi [y/t] ? ");
//        scanf(" %c", &lanjut);
//
//        if (lanjut != 'y' && lanjut != 'Y') {
//            break;
//        }
//    }
//
//    printf("Total bilangan = %d\n", total);

    //3
//    char lanjut;
//    int bilangan, total = 0;
//    int bilangan_ke = 1;
//    int maksimum = INT_MIN;
//    int minimum = INT_MAX;
//
//    while (1) {
//        printf("Masukkan bilangan ke-%d: ", bilangan_ke);
//        scanf("%d", &bilangan);
//
//        total += bilangan;
//        bilangan_ke++;
//
//        if (bilangan > maksimum) {
//            maksimum = bilangan;
//        }
//        if (bilangan < minimum) {
//            minimum = bilangan;
//        }
//
//        printf("Mau memasukkan data lagi [y/t] ? ");
//        scanf(" %c", &lanjut);
//
//        if (lanjut != 'y' && lanjut != 'Y') {
//            break;
//        }
//    }
//
//    float rata_rata = (float)total / (bilangan_ke - 1);
//
//    printf("Rata-rata: %.2f\n", rata_rata);
//    printf("Maksimum: %d\n", maksimum);
//    printf("Minimum: %d\n", minimum);

    //4
    int n, i, sum = 0;

    printf("Masukkan nilai n: ");
    scanf("%d", &n);

    for (i = 0; i <= n; i++) {
        sum += i;
        printf("%d ", sum);
    }

    printf("... Bilangan ke %d\n", n);

    //5
    char karakter;
    int jumlah_karakter = 0;
    int jumlah_spasi = 0;

    printf("Ketikkan sembarang kalimat (tekan Enter untuk selesai):\n");

    while (1) {
        karakter = getchar();

        if (karakter == '\n') {
            break;
        }

        jumlah_karakter++;

        if (karakter == ' ') {
            jumlah_spasi++;
        }
    }

    printf("Jumlah karakter = %d\n", jumlah_karakter);
    printf("Jumlah spasi = %d\n", jumlah_spasi);

    //6
    long long bilangan;
    printf("Masukkan bilangan: ");
    scanf("%lld", &bilangan);

    int jumlah_angka = 0;
    int sisa;
    int pertama = 1;

    while (bilangan != 0) {
        sisa = bilangan % 10;
        jumlah_angka += sisa;
        bilangan /= 10;

        if (pertama) {
            printf("%d", sisa);
            pertama = 0;
        } else {
            printf(" + %d", sisa);
        }
    }

    printf(" = %d\n", jumlah_angka);

    //7
    float biayaAwal, setoranBulanan, kenaikanTahunan;

    printf("Masukkan biaya awal berapa: ");
    scanf("%f", &biayaAwal);

    printf("Berapa cicilan yang mampu dibayarkan tiap bulan: ");
    scanf("%f", &setoranBulanan);

    printf("Berapa rata-rata kenaikan tiap tahun: ");
    scanf("%f", &kenaikanTahunan);

    int jumlahBulan = hitungBulan(biayaAwal, setoranBulanan, kenaikanTahunan);

    printf("Waktu yang dibutuhkan untuk melunasi biaya haji: %d bulan\n", jumlahBulan);
    return 0;
}
