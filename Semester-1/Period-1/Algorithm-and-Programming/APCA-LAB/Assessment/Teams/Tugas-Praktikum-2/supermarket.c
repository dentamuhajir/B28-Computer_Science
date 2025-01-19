#include<stdio.h>

int main() {
    float totalPembelian;
    float totalBayar;
    float persentaseDiskon = 0;
    float totalDiskon;
    int kupon;
    puts("===== Program Supermarket Kupon Hadiah ===== ");
    printf("Input total pembelian         : Rp ");
    scanf("%f", &totalPembelian);
    kupon = (int) totalPembelian / 100000; // Mendapatkan 1 kupon jika jumlah total pembelian lebih dari seratus ribu berlaku kelipatannya
    if(totalPembelian >= 100000) { // Jika total pembelian lebih dari sama dengan 100.000
        persentaseDiskon = 0.05 * kupon; // diskon 5% x jumlah kupon
    }
    totalDiskon = totalPembelian * persentaseDiskon; // Menghitung jumlah diskon
    totalBayar = totalPembelian - totalDiskon; // Menghitung jumlah total bayar
    puts("============ Rincian Pembayaran ============");
    printf("Nominal total pembelian       : Rp %.2f \n", totalPembelian);
    printf("Kupon yang didapatkan         : %d lembar\n", kupon);
    printf("Presentase diskon             : %.0f% %\n", persentaseDiskon * 100);
    printf("Nominal diskon sebesar        : Rp %.2f \n", totalDiskon);
    printf("Total bayar sebesar           : Rp %.2f", totalBayar);
    puts("");
    return 0;
}