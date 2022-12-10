#define __STDC_WANT_LIB_EXT1__ 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <string.h>

void waktu();
void masuk();
void cover();
void input_data();
void kiloan();
void satuan();
void menu_jasa();
void menu_layanan();
void transaksi();
double validasi1();

int main(){
	masuk();
	system("pause");
	cover();
return 0;
}

void waktu(){
    time_t t = time(NULL);
    printf("local: %s\n", asctime(localtime(&t)));
 
#ifdef __STDC_LIB_EXT1__
    struct tm buf;
    char str[26];

    asctime_s(str,sizeof str,localtime_s(&t, &buf)));
    printf("local: %s", str);
#endif
}

void masuk(){
	int masuk;
	int ucapan;
	
	printf("\n\n\n\n\n");
	printf("\t\t ____________________________________________________________ \n");
	printf("\t\t|============================================================|\n");
  	char msk[] = "\t\t|.'.'.'.'.'.' *** S E L A M A T  D A T A N G *** '.'.'.'.'.'.|\n\n";
		for(masuk = 0; msk[masuk] != 0; masuk++){
        	Sleep(25);
        	printf("%c",msk[masuk]);
		}
	
	char ucp[] = "\t\t|        ----- LAUNDRY YUNA 5 JAM LANGSUNG JADI -----        |\n";
		for(ucapan = 0; ucp[ucapan] != 0; ucapan++){
        	Sleep(25);
        	printf("%c",ucp[ucapan]);
		}
    printf("\t\t|============================================================|\n");
	printf("\t\t|____________________________________________________________|\n");
    printf("\t\t Tekan Tombol Enter Untuk Melanjutkan...");
	getchar();
	cover();
}

void cover(){
	system("cls");
	printf("\n\n\n\n\n");
	printf("\t\t ______________________________________________________________ \n");
	printf("\t\t|==============================================================|\n");
	printf("\t\t|==>               PROGRAM JASA YUNA LAUNDRY                <==|\n");
	printf("\t\t|--------------------------------------------------------------|\n");
	printf("\t\t|===>      Tugas Besar Algoritma dan Pemrograman 2022      <===|\n");
	printf("\t\t|=====>                    Kelas B                        <====|\n");
	printf("\t\t|==============================================================|\n");
	printf("\t\t|  Nama Kelompok:                                NIM:          |\n");
	printf("\t\t|  1. Ni Made Nadya Dewindra Wirata          (2205551021)      |\n");
	printf("\t\t|  2. Ni Putu Yuni Kusumayanti               (2205551033)      |\n");
	printf("\t\t|==============================================================|\n");
	printf("\t\t|______________________________________________________________|\n");
	printf("\t\t Tekan Tombol Enter Untuk Melanjutkan...");
	getchar();
	input_data();
}

void input_data(){
	double pilihan;
	int opsi;
	
	system("cls");
	printf("\n\n\n\n\n");
	printf("\t\t ___________________________________________________________________________________________________________________________________ \n");
	printf("\t\t|===================================================================================================================================|\n");
	printf("\t\t|==>                                                *** JASA YUNA LAUNDRY ***                                                    <==|\n");
	printf("\t\t|---------------------------------------------------+--------------------------------------------+----------------------------------|\n");
	printf("\t\t| Catatan:                                          | Catatan:                                   | Catatan:                         |\n");
	printf("\t\t|  Jenis laundry:                                   |  Jenis Barang:                             |  Rincian Harga:                  |\n");
	printf("\t\t|   a. Kiloan                                       |   a. Kiloan                                |   a. Kiloan                      |\n");
	printf("\t\t|      -> Perhitungan biaya berdasarkan timbangan   |      -> Berupa Baju, Celana, Jaket, Kemeja |      -> 2 Kg Rp. 12.000,-        |\n");
	printf("\t\t|         yang di Laudry.                           |                                            |                                  |\n");
	printf("\t\t|      -> Minimun berat barang 2 kg.                |   b. Satuan                                |   b. Satuan                      |\n");
	printf("\t\t|                                                   |      -> Berupa Selimut, Sarung Bantal,     |      -> Rp. 20.000,- per barang  |\n");
	printf("\t\t|   b. Satuan                                       |         Sarung Guling, Sapu Tangan, Serbet,|                                  |\n");
	printf("\t\t|      -> Perhitungan biaya berdasarkan satuan      |                                            |                                  |\n");
	printf("\t\t|         jenis barang yang di Laundry.             |                                            |                                  |\n");
	printf("\t\t|      -> Minimun harga order Rp. 20.000,-          |                                            |                                  |\n");
	printf("\t\t|---------------------------------------------------+--------------------------------------------+----------------------------------|\n");
	printf("\t\t|===================================================================================================================================|\n");
	printf("\t\t|-----------------------------------------------------------------------------------------------------------------------------------|\n");
	printf("\t\t| Pilih Jenis Laundy                                                                                                                |\n");
	printf("\t\t|  1. Kiloan                                                                                                                        |\n");
	printf("\t\t|  2. Satuan                                                                                                                        |\n");
	printf("\t\t|-----------------------------------------------------------------------------------------------------------------------------------|\n");
	printf("\t\t|===================================================================================================================================|\n");
	printf("\t\t|___________________________________________________________________________________________________________________________________|\n");
	printf("\t\t  Input Pilihan Anda : ");
	pilihan = validasi1();
	opsi = ceil(pilihan);
	
	if(opsi==pilihan){
		system("cls");
		switch(opsi){
			case 1: kiloan(); system("pause");
					break;
					
			case 2: satuan(); system("pause");
					break; 
		}
	}
}

double validasi1(){
    double pilihan, select;
    char enter;
        pilihan = scanf("%lf%c", &select, &enter);
        if (pilihan != 2 || enter != '\n'){
        	getchar();
            printf("\n\t\t\t\t Pilihan Anda Salah! Hanya Menerima Inputan Angka!\n");
            printf("\t\t\t\t Masukkan Angka : ");
            return validasi1();
                
        }else if (select<1 || enter !='\n'){
            printf("\n\t\t\t\t Pilihan yang Anda Masukkan Tidak Tersedia! Masukkan Angka (1/2) Saja!\n");
            printf("\t\t\t\t Masukkan Angka Kembali : ");
            return validasi1();
        
        }else if (select>2 || enter !='\n'){
            printf("\n\t\t\t\t Pilihan yang Anda Masukkan Tidak Tersedia! Masukkan Angka (1/2) Saja!\n");
            printf("\t\t\t\t Masukkan Angka Kembali : ");
            return validasi1();
            
        }else{
            return select;
        }
    
}

void kiloan(){
	int i, jumlah, banyak;
	char barang[100];
	int berat_barang;
	
	system("cls");
	printf("\n\n\n\n\n");
	printf("\t\t ________________________________________________________________________________________ \n");
	printf("\t\t|========================================================================================|\n");
	printf("\t\t|==>                               *** JASA YUNA LAUNDRY ***                          <==|\n");
	printf("\t\t|--------------------------------------------+-------------------------------------------|\n");
	printf("\t\t| Catatan :                                                                              |\n");
	printf("\t\t|  1. Perhitungan biaya berdasarkan timbangan yang di laundry dengan berat minimal 2 kg. |\n");
	printf("\t\t|  2. Jenis Barang pada Kiloan ini berupa Baju, Celana, Jaket, dan Kemeja.               |\n");
	printf("\t\t|  3. Harga untuk 2 kg-nya sebesar Rp. 12.000,-                                          |\n");
	printf("\t\t|--------------------------------------------+-------------------------------------------|\n");
	printf("\t\t|========================================================================================|\n");
	printf("\t\t  Jumlah Jenis Barang : ");
	scanf("%d", &jumlah);
    for (i = 0; i < jumlah; ++i){
        printf("\t\t  Barang ke-%d = ", i+1);
		scanf("%s%d", &barang[i], &banyak);
    }
    printf("\t\t|========================================================================================|\n");
    printf("\t\t  Berat Barang : ");
    scanf("%d", &berat_barang);
	printf("\t\t|========================================================================================|\n");
	printf("\t\t|________________________________________________________________________________________|\n");
	menu_jasa();
}

void satuan(){
	int i, jumlah, banyak;
	char barang[100];
	
	system("cls");
	printf("\n\n\n\n\n");
	printf("\t\t ________________________________________________________________________________________ \n");
	printf("\t\t|========================================================================================|\n");
	printf("\t\t|==>                               *** JASA YUNA LAUNDRY ***                          <==|\n");
	printf("\t\t|--------------------------------------------+-------------------------------------------|\n");
	printf("\t\t| Catatan :                                                                              |\n");
	printf("\t\t|  1. Perhitungan biaya berdasarkan satuan jenis barang yang di laundry minimal harga    |\n");
	printf("\t\t|     order Rp. 20.000,-                                                                 |\n");
	printf("\t\t|  2. Jenis Barang pada Satuan ini berupa Selimut, Sarung Bantal, Sarung Guling, Serbet, |\n");
	printf("\t\t|     dan Sapu Tangan.                                                                   |\n");
	printf("\t\t|  3. Harga untuk per Barang-nya adalah Rp.20.000,-                                      |\n");
	printf("\t\t|--------------------------------------------+-------------------------------------------|\n");
	printf("\t\t|========================================================================================|\n");
	printf("\t\t\t\t  Jumlah Jenis Barang : ");
	scanf("%d", &jumlah);
    for (i = 0; i < jumlah; ++i){
        printf("\t\t\t\t  Barang ke-%d = ", i+1);
		scanf("%s%d", &barang[i], &banyak);
    }
	printf("\t\t|========================================================================================|\n");
	printf("\t\t|________________________________________________________________________________________|\n");
	menu_jasa();
	
}

void menu_jasa(){
	int jasa;
	
	system("cls");
	printf("\n\n\n\n\n");
	printf("\t\t ________________________________________________________________________________________ \n");
	printf("\t\t|========================================================================================|\n");
	printf("\t\t|==>                               *** JASA YUNA LAUNDRY ***                          <==|\n");
	printf("\t\t|--------------------------------------------+-------------------------------------------|\n");
	printf("\t\t| Jenis Jasa :                               |                                           |\n");
	printf("\t\t|  1. Cuci Basah                             | Catatan:                                  |\n");
	printf("\t\t|  2. Cuci Kering                            |   1. Dry Cleanning atau Cuci tanpa Air    |\n");
	printf("\t\t|  3. Cuci Kering Setrika                    |   2. Dry Clean only Jas, Kebaya Berpayet, |\n");
	printf("\t\t|  4. Setrika                                |      Bahan Wol                            |\n");
	printf("\t\t|  5. Dry Cleaning                           |                                           |\n");
	printf("\t\t|--------------------------------------------+-------------------------------------------|\n");
	printf("\t\t|========================================================================================|\n");
	printf("\t\t|________________________________________________________________________________________|\n");
	printf("\t\t  Pilihan Jasa Anda : ");
	scanf("%d", &jasa);
}

void menu_layanan(){
	int layanan;
	
	system("cls");
	printf("\n\n\n\n\n");
	printf("\t\t ________________________________________________________________________________________ \n");
	printf("\t\t|========================================================================================|\n");
	printf("\t\t|==>                               *** JASA YUNA LAUNDRY ***                          <==|\n");
	printf("\t\t|--------------------------------------------+-------------------------------------------|\n");
	printf("\t\t|                                            | Catatan:                                  |\n");
	printf("\t\t| Jenis Layanan :                            |   1. Estimasi selesai Layanan Reguler     |\n");
	printf("\t\t|  1. Layanan Reguler                        |      adalah 3 - 4 hari                    |\n");
	printf("\t\t|  2. Layanan Express                        |   2. Estimasi selesai Layanan Express     |\n");
	printf("\t\t|                                            |      adalah 5 jam - 1 hari                |\n");
	printf("\t\t|--------------------------------------------+-------------------------------------------|\n");
	printf("\t\t|========================================================================================|\n");
	printf("\t\t|________________________________________________________________________________________|\n");
	printf("\t\t  Pilih Layanan Anda : ");
	scanf("%d", &layanan);
}

void transaksi(){
	int harga, tagihan, berat_barang;
	int layanan_reguler = 0;
	int layanan_express = 20.000;
	
	system("cls");
	printf("\n\n\n\n\n");
	printf("\t\t ________________________________________________________________________________________ \n");
	printf("\t\t|========================================================================================|\n");
	printf("\t\t|==>                               *** JASA YUNA LAUNDRY ***                          <==|\n");
	printf("\t\t|----------------------------------------------------------------------------------------|\n");
	printf("\t\t| Detail Biaya : ");
	if(kiloan){
		harga = berat_barang * 12.000;
		printf("\t\t  Total Tagihan : Rp. %d", harga);
		if(layanan == 1){
			printf("\t\t  Layanan Reguler : Rp. %d", layanan_reguler);
			tagihan = harga + layanan_reguler;
			printf("\t\t  Grand Total Tagihan : Rp. %d", tagihan);
			
		}else(layanan == 2){
			printf("\t\t  Layanan Express : Rp. %d", layanan_express);
			tagihan = harga + layanan_express;
			printf("\t\t  Grand Total Tagihan : Rp. %d", tagihan);
			
		}
	}
}
