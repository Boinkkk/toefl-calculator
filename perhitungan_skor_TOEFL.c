#include <stdio.h>

int main() {

    // Kumpulan data konversi berupa array

    int section_1[] = { 57, 57, 56, 55, 54, 54, 53, 52,
                        52, 51, 51, 0};

    int section_2[] = {68, 67, 65, 63, 61, 60, 58, 57, 56,
                       55, 54, 0};

    int section_3[] = {55, 54, 54, 53, 52, 52, 51, 50, 49, 48,
                       48, 0};

    int section1;
    int section2;
    int section3;

    // user input pada setiap section

    printf("--Program Perhitungan Skor TOEFL-- \n"
           "Jumlah soal benar tidak boleh dibawah 30, Jika dibawah 30 maka dianggap 0 \n");


    printf("--SECTION 1--\n"
           "Masukksan Total Soal benar Pada Section 1 : ");

    scanf("%d", &section1);

    printf("--SECTION 2--\n"
           "Masukksan Total Soal benar Pada Section 2 : ");

    scanf("%d", &section2);

    printf("--SECTION 3--\n"
           "Masukksan Total Soal benar Pada Section 3 : ");

    scanf("%d", &section3);

//Perhitungan Hasil konversi soal

    if (section1 < 30  || section1 > 40) {
        section1 = 29;
    }

    if (section2 < 30 || section2 > 40 ) {
        section2 = 29;
    }

    if (section3 < 30 || section3 > 40) {
        section3 = 29;
    }

// -- Section 123 --

    int konv_1 = section_1[40 - section1];
    int konv_2 = section_2[40 - section2];
    int konv_3 = section_3[40 - section3];

    printf("Hasil konversi Section 1 : %d \n",konv_1);
    printf("Hasil konversi Section 2 : %d\n", konv_2);
    printf("Hasil konversi Section 3 : %d\n", konv_3);

    // Perhitungan skor toefl

    float skor_toefl = ((konv_1 + konv_2 + konv_3) * 10) / 3;

    printf("Skor TOEFL = %.2f", skor_toefl);





}