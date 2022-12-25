//library input-output program//
#include <stdio.h>
//;ibrary yang menyediakan fungsi - fungsi dengan tujuan umum, seperti : pengurutan dan pencarian data//
#include <stdlib.h>
//library dari void waktu//
#include <time.h>
//library untuk perhitungan dan pengulangan switch case//
#include <math.h>
//library string//
#include <string.h>

void waktu();
void masuk();
void cover();
void input_data();
void kiloan();
void satuan();
void jasa();
void layanan();
double validasi1();
double validasi2();
double validasi3();
double validasi4();

int main(){
	masuk();
	system("pause");
	cover();
}

//prosedur memanggil waktu pada saat program dijalankan//
void waktu(){
    struct tm *Sys_T;
 
    time_t Tval;
    Tval = time(NULL);
    Sys_T = localtime(&Tval); /* Untuk mendapatkan waktu lokal komputer */
    /* Sys_T = gmtime(&Tval); */ /* Untuk mendapatkan waktu komputer berbasis GMT/UTC */
 
    printf("Day of Month = %d - %d - %d", Sys_T->tm_mday, Sys_T->tm_mon+1, 1900+Sys_T->tm_year);

    printf ( "\n\nThe current date/time is: %s", asctime (Sys_T));
    /* asctime berfungsi untuk mengubah struct tm menjadi string c dengan format Www Mmm dd hh:mm:ss yyyy */
}

//prosedur tampilan program awal saat program dijalankan//
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
		} //pengulangan agar huruf tampil satu - persatu//
	
	char ucp[] = "\t\t|        ----- LAUNDRY YUNA 5 JAM LANGSUNG JADI -----        |\n";
		for(ucapan = 0; ucp[ucapan] != 0; ucapan++){
        	Sleep(25);
        	printf("%c",ucp[ucapan]); //pengulangan agar huruf tampil satu per satu//
		}
    printf("\t\t|============================================================|\n");
	printf("\t\t|____________________________________________________________|\n");
    printf("\t\t Tekan Tombol Enter Untuk Melanjutkan...");
	getchar(); //untuk bisa menampilkan kata yang diatas kemudian dilanjutkan ke prosedur cover()//
	cover();
}

//prosedur untuk menampilkan nama program dan nama anggota kelompok//
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
	getchar(); //untuk bisa menampilkan kata diatas kemudian dilanjutkan ke prosedur input_data()//
	input_data();
}

//prosedur untuk meng-input-kan jenis laundry yang diinginkan//
void input_data(){
	double pilihan;
	int opsi;
	
	system("cls"); //perintah untuk membersihkan proses sebelumnya//
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
	printf("\t\t|  0. Keluar                                                                                                                        |\n");
	printf("\t\t|-----------------------------------------------------------------------------------------------------------------------------------|\n");
	printf("\t\t|===================================================================================================================================|\n");
	printf("\t\t|___________________________________________________________________________________________________________________________________|\n");
	printf("\t\t  Input Pilihan Anda : ");
	pilihan = validasi1(); //memasukkan salah satu pilihan yang disediakan, kemudian akan divalidasi agar pilihan yang dimasukkan sesuai dengan pilihan yang tersedia//
	opsi = ceil(pilihan);
	//fungsi untuk menentukan proses sejanjutnya di setiap pilihan yang tersedia//
	if(opsi==pilihan){
		system("cls");
		switch(opsi){
			case 1: kiloan(); system("pause");
					break; //jika memilih 1, maka proses akan berlanjut ke prosedur kiloan()//
					
			case 2: satuan(); system("pause");
					break; //jika memilih 2, maka proses akan berlanjut ke prosedur satuan()//
			
			case 0: printf("\t\t\t\t _________________________________________________________\n");
					printf("\t\t\t\t|---------------------------------------------------------|\n");
					printf("\t\t\t\t| =>>           TERIMAKASIH, SAMPAI JUMPA!            <<= |\n");
					printf("\t\t\t\t|---------------------------------------------------------|\n");
					printf("\t\t\t\t|_________________________________________________________|\n");
					exit(1);
					break; //jika memilih 0, maka akan keluar dari program//
		}
	}
}

//fungsi untuk mengecek inputan pada prosedur input_data dan prosedur kiloan pada bagian layanan//
double validasi1(){
    double pilihan, select;
    char enter;
        pilihan = scanf("%lf%c", &select, &enter);
        if (pilihan != 2 || enter != '\n'){
        	getchar();
            printf("\n\t\t\t\t Inputan Anda Salah! Hanya Menerima Inputan Angka!\n");
            printf("\t\t\t\t Masukkan Angka : ");
            return validasi1(); //jika inputannya salah, maka akan ulang meng-inputkan//
                
        }else if (select<0 || enter !='\n'){
            printf("\n\t\t\t\t Pilihan yang Anda Masukkan Tidak Tersedia! Masukkan Angka (0/1/2) Saja!\n");
            printf("\t\t\t\t Masukkan Angka Kembali : ");
            return validasi1(); //jika salah memasukkan pilihan, maka akan memilih ulang//
        
        }else if (select>2 || enter !='\n'){
            printf("\n\t\t\t\t Pilihan yang Anda Masukkan Tidak Tersedia! Masukkan Angka (0/1/2) Saja!\n");
            printf("\t\t\t\t Masukkan Angka Kembali : ");
            return validasi1(); //jika salah memasukkan pilihan, maka akan memilih ulang//
            
        }else{
            return select; //jika pilihan benar, maka akan berlanjut ke proses selanjutnya dalam prosedur diatas//
        }
}

//prosedur untuk menghitung laundry, jika pilihan 1//
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
	jumlah = validasi3(); //bagian untuk menginputkan jumlah jenis barang yang dilaundry, kemudian divalidasi sebelum menjutkan proses eksekusi//
    for (i = 0; i < jumlah; ++i){
        printf("\t\t  Barang ke-%d = ", i+1);
		scanf("%s%d", &barang[i], &banyak);
    }
    printf("\t\t|========================================================================================|\n");
    printf("\t\t  Berat Barang : ");
    berat_barang = validasi4(); //bagian untuk menginputkan berat barang yang di laundry, kemudian divalidasi sebelum menlanjutkan proses eksekusi//
	printf("\t\t|========================================================================================|\n");
	printf("\t\t|________________________________________________________________________________________|\n");
	jasa();
}

//fungsi untuk mengecek inputan jumlah barang pada prosedur kiloan//
double validasi3(){
    double pilihan, select;
    char enter;
        pilihan = scanf("%lf%c", &select, &enter);
        if (pilihan != 2 || enter != '\n'){
        	getchar();
            printf("\n\t\t\t\t Inputan Anda Salah! Hanya Menerima Inputan Angka!\n");
            printf("\t\t\t\t Masukkan Angka : ");
            return validasi3(); //jika inputannya salah, maka akan ulang meng-inputkan//
            
        }else{
            return select; //jika pilihan benar, maka akan berlanjut ke proses selanjutnya dalam prosedur diatas//
        }
}

//fungsi untuk mengecek inputan berat_barang pada prosedur kiloan//
double validasi4(){
    double pilihan, select;
    char enter;
        pilihan = scanf("%lf%c", &select, &enter);
        if (pilihan != 2 || enter != '\n'){
        	getchar();
            printf("\n\t\t\t\t Inputan Anda Salah! Hanya Menerima Inputan Angka!\n");
            printf("\t\t\t\t Masukkan Angka : ");
            return validasi4(); //jika inputannya salah, maka akan ulang meng-inputkan//
                
        }else if (select<2 || enter !='\n'){
            printf("\n\t\t\t\t Berat yang Anda Inputkan tidak memenuhi syarat untuk Jenis Laundry ini! Silakan pilih Jenis yang sesuai!");
            printf("\t\t\t\t Masukkan Angka Kembal : ");
            return input_data(); //jika salah memasukkan berat, maka akan memilih ulang jenis laundry//
            
        }else{
            return select; //jika pilihan benar, maka akan berlanjut ke proses selanjutnya dalam prosedur diatas//
        }
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

oid jasa(){
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
	printf("\t\t|  0. Back                                   |                                           |\n");
	printf("\t\t|--------------------------------------------+-------------------------------------------|\n");
	printf("\t\t|========================================================================================|\n");
	printf("\t\t|________________________________________________________________________________________|\n");
	printf("\t\t  Pilihan Jasa Anda : ");
	jasa = validasi2();
	if(jasa == 0){
		kiloan();
		
	}else{
		
	}
layanan();
}

void layanan(){
	int layanan;
		
	system("cls");
	printf("\n\n\n\n\n");
	printf("\t\t ________________________________________________________________________________________ \n");
	printf("\t\t|========================================================================================|\n");
	printf("\t\t|==>                               *** JASA YUNA LAUNDRY ***                          <==|\n");
	printf("\t\t|--------------------------------------------+-------------------------------------------|\n");
	printf("\t\t| Jenis Layanan :                            | Catatan:                                  |\n");
	printf("\t\t|  1. Layanan Reguler                        |   1. Estimasi selesai Layanan Reguler     |\n");
	printf("\t\t|  1. Layanan Express                        |      adalah 3 - 4 hari                    |\n");
	printf("\t\t|  0. Back                                   |   2. Estimasi selesai Layanan Express     |\n");
	printf("\t\t|                                            |      adalah 5 jam - 1 hari                |\n");
	printf("\t\t|--------------------------------------------+-------------------------------------------|\n");
	printf("\t\t|========================================================================================|\n");
	printf("\t\t|________________________________________________________________________________________|\n");
	printf("\t\t  Pilih Layanan Anda : ");
	layanan = validasi1();
	if(layanan == 0){
		return jasa();
	}else{
		
	}
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
