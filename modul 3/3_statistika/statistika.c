#include <stdio.h>
#include <stdlib.h>

int main() {

  // pendeklarasian variabel data
  int n, a, b, temp = 0, q1, q2;
  float median, pilihan;
  do {
    printf("\t\t\t==================\n");
    printf("\t\t\tPROGRAM STATISTIKA\n");
    printf("\t\t\t  -KELOMPOK 16-   \n");
    printf("\t\t\t==================\n");

    // input jumlah data
    printf("Masukkan jumlah data: ");
    scanf("%d", &n);
    fflush(stdin);
    system("cls || clear");

    // input data
    int data[n], frekuensi[n], modus, max = -1000, sum = 0;
    float mean;

    for (a = 0; a < n; a++) {
      printf("Masukkan data ke-%d : ", a + 1);
      scanf("%d", &data[a]);
      sum = sum + data[a];
    }
    system("cls || clear");

    // median
    for (a = 0; a < (n - 1); a++) {
      for (b = a; b < n; b++) {
        if (data[b] < data[a]) {
          temp = data[a];
          data[a] = data[b];
          data[b] = temp;
        };
      };
    }
    printf("\nData setelah diurutkan: ");
    for (a = 0; a < n; a++) {
      printf("%d,", data[a]);
    }
    if (n % 2 == 1) {
      q2 = (n / 2);
      median = data[q2];
      printf("\nMedian adalah: %.2f", median);
    } else if (n % 2 == 0) {
      q1 = (n / 2) - 1;
      q2 = (n / 2);
      median = ((float)data[q1] + (float)data[q2]) / 2;
      printf("\nMedian adalah: %.2f", median);
    }

    printf("\n");

    // mencari mean atau rata-rata
    mean = (float)sum / n;
    printf("Mean adalah: %.2f\n", mean);

    // mencari modus
    for (a = 0; a < 10; a++) {
      frekuensi[a] = 0;
      for (b = 0; b < n; b++) {
        if (data[b] == a) {
          frekuensi[a] = frekuensi[a] + 1;
        };
      }
      if (frekuensi[a] > max) {
        max = frekuensi[a];
        modus = a;
      }
    };

    // mencari modus
    for (a = 0; a <11 ; a++) {
      frekuensi[a] = 0;
      for (b = 0; b < n; b++) {
        if (data[b] == a) {
          frekuensi[a] = frekuensi[a] + 1;
        };
      }
      if (frekuensi[a] > max) {
        max = frekuensi[a];
        modus = a;
      }
    };

    printf("Modus adalah: %d\n", modus);


    system("pause");
    // memberikan pilihan untuk pengulangan
    system("cls || clear");
    printf("\n");
    printf("TEKAN 1 BILA INGIN KEMBALI DAN TEKAN SELAIN 1 UNTUK KELUAR\n");
    scanf("%f", &pilihan);
    system("cls || clear");
  } while (pilihan == 1);

  printf("\n");
  printf("\tTERIMA KASIH\n");
  printf("\n");

return 0;
}
