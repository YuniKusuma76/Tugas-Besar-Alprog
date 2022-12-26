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

void masuk(); //prosedur tampilan awal saat program berjalan//
void cover(); //prosedur yang menampilkan nama program dan anggota kelompok//
void input_data(); //prosedur yang meng-inputkan data, berupa pilihan jenis laundry//
void kiloan(); //prosedur menghitung laundry, jika pada prosedur input_data memilih nomor 1//
void satuan(); //prosedur menghitung laundry, jika pada prosedur input_data memilih nomor 2//
void jasa(); //prosedur meng-inputkan jasa yang akan dilakukan//
void layanan(); //prosedur meng-inpukan layanan yang akan dilakukan//
void transaksi(); //prosedur untuk menghitung transaksi laundry//
double validasi1(); //fungsi validasi pada prosedur input_data dan prosedur layanan//
double validasi2(); //fungsi validasi pada prosedur kiloan bagian jumlah barang yang diinputkan//
double validasi3(); //fungsi validasi pada prosedur kiloan bagain berat barangyang diinputkan//
double validasi4(); //fungsi validasi pada prosedur jasa//
double validasi5(); //fungsi validasi pada prosedur satuan//

int main(){
	masuk();
	system("pause");
	cover();
	system("pause");
	input_data();
}

//tipe data atau array yang digunakan untuk memanggil dan menyimpan data yag akan diinputkan//
struct data{
	double pilihan; //variabel untuk menyimpan pilihan pada prosedur input_data//
	int kjumlah, //variabel untuk menyimpan jumlah jenis barang pada prosedur kiloan//
		kbanyak; //variabel untuk menyimpan banyak barang dari barang yang diimputkan pada prosedur kiloan//
	char kbarang[100]; //variabel untuk menyimpan nama barang yang diinputkan pada prosedur kiloan//
	float berat_barang; //variabel untuk menyimpan berat barang pada prosedur kiloan//
	int sjumlah, //variabel untuk menyimpan jumlah jenis barang pada prosedur satuan//
		sbanyak; //variabel untuk menyimpan banyak barang dari barang yang diinputkan pada prosedur satuan//
	char sbarang[100]; //variabel untuk menyimpan nama barang yang diinputkan pada prosedur satuan//
	int total_sbanyak; //variabel untuk menyimpan total keseluruhan dari banyak barang yang diinputkan//
	int jasa, //variabel untuk menyimpan pilihan jasa yang akan diinputkan//
		layanan; //variabel untuk menyimpan pilihan layanan yang akan diinputkan//
}proses;

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
	input_data(); //untuk menunjukkan proses selanjutnya//
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
	proses.pilihan = validasi1(); //memasukkan salah satu pilihan yang disediakan, kemudian akan divalidasi agar pilihan yang dimasukkan sesuai dengan pilihan yang tersedia//
	opsi = ceil(proses.pilihan);
	//fungsi untuk menentukan proses sejanjutnya di setiap pilihan yang tersedia//
	if(opsi==proses.pilihan){
		system("cls");
		switch(opsi){
			case 1: kiloan(); system("pause");
					break; //jika memilih 1, maka proses akan berlanjut ke prosedur kiloan()//
					
			case 2: satuan(); system("pause");
					break; //jika memilih 2, maka proses akan berlanjut ke prosedur satuan()//
			
			case 0: printf("\t\t _________________________________________________________\n");
					printf("\t\t|---------------------------------------------------------|\n");
					printf("\t\t| =>>           TERIMAKASIH, SAMPAI JUMPA!            <<= |\n");
					printf("\t\t|---------------------------------------------------------|\n");
					printf("\t\t|_________________________________________________________|\n");
					exit(1);
					break; //jika memilih 0, maka akan keluar dari program//
		}
	}
}

//fungsi untuk mengecek inputan pada prosedur input_data dan prosedur layanan//
double validasi1(){
    double pilihan, select;
    char enter;
        pilihan = scanf("%lf%c", &select, &enter);
        if (pilihan != 2 || enter != '\n'){
        	getchar();
            printf("\n\t\t  Inputan Anda Salah! Hanya Menerima Inputan Angka!\n");
            printf("\t\t  Masukkan Angka : ");
            return validasi1(); //jika inputannya salah, maka akan ulang meng-inputkan//
                
        }else if (select<0 || enter !='\n'){
            printf("\n\t\t  Pilihan yang Anda Masukkan Tidak Tersedia! Masukkan Angka (0/1/2) Saja!\n");
            printf("\t\t  Masukkan Angka Kembali : ");
            return validasi1(); //jika salah memasukkan pilihan, maka akan memilih ulang//
        
        }else if (select>2 || enter !='\n'){
            printf("\n\t\t  Pilihan yang Anda Masukkan Tidak Tersedia! Masukkan Angka (0/1/2) Saja!\n");
            printf("\t\t  Masukkan Angka Kembali : ");
            return validasi1(); //jika salah memasukkan pilihan, maka akan memilih ulang//
            
        }else{
            return select; //jika pilihan benar, maka akan berlanjut ke proses selanjutnya dalam prosedur diatas//
        }
}

//prosedur untuk menghitung laundry, jika pilihan 1//
void kiloan(){
	int k, kjumlah, kbanyak;
	char kbarang[100];
	float berat_barang;
	
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
	printf("\t\t|  4. Ketik '0' untuk kembali ke menu selanjutnya                                        |\n");
	printf("\t\t|--------------------------------------------+-------------------------------------------|\n");
	printf("\t\t|========================================================================================|\n");
	printf("\t\t  Jumlah Jenis Barang : ");
	proses.kjumlah = validasi3(); //bagian untuk menginputkan jumlah jenis barang yang dilaundry, kemudian divalidasi sebelum menjutkan proses eksekusi//
	//proses jika user ingin kembali ke menu sebelumnya//
	if(proses.kjumlah == 0){
		input_data(); //bagian jika user ingin kembali ke menu sebelumnya, maka akan inputkan angka 0//
		
	}else{
		//jika user tidak mengetikkan angka 0, maka proses akan berlajut//
	} //end proses//
	printf("\t\t|----------------------------------------------------------------------------------------|\n");
	printf("\t\t  Deskripsikan Jenis Barang dan Banyaknya\n ");
	//pengulangan untuk meng-input-kan barang - barang yang dilaundry//
    for (k = 0; k < proses.kjumlah; ++k){
        printf("\t\t   - Barang ke-%d = ", k+1);
		scanf("%s%d", &proses.kbarang[k], &proses.kbanyak); //proses untuk menginputkan barang satu bersatu sesuai dengan jumlah jenis barang yang diinputkan//
    }
    printf("\t\t|========================================================================================|\n");
    printf("\t\t  Berat Barang : ");
    proses.berat_barang = validasi4(); //bagian untuk menginputkan berat barang yang di laundry, kemudian divalidasi sebelum menlanjutkan proses eksekusi//
	printf("\t\t|========================================================================================|\n");
	printf("\t\t|________________________________________________________________________________________|\n");
	jasa(); //bagian untuk menunjukkan proses selanjutnya//
}

//fungsi untuk mengecek inputan jumlah barang pada prosedur kiloan dan prosedur satuan//
double validasi3(){
    double pilihan, select;
    char enter;
        pilihan = scanf("%lf%c", &select, &enter);
        if (pilihan != 2 || enter != '\n'){
        	getchar(); 
        	printf("\t\t|----------------------------------------------------------------------------------------|\n");
            printf("\n\t\t  Inputan Anda Salah! Hanya Menerima Inputan Angka!\n");
            printf("\t\t  Masukkan Angka : ");
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
        	printf("\t\t|----------------------------------------------------------------------------------------|\n");
            printf("\n\t\t  Inputan Anda Salah! Hanya Menerima Inputan Angka!\n");
            printf("\t\t  Masukkan Angka : ");
            return validasi4(); //jika inputannya salah, maka akan ulang meng-inputkan//
                
        }else if (select<2 || enter !='\n'){
        	printf("\t\t|----------------------------------------------------------------------------------------|\n");
            printf("\n\t\t  Berat yang Anda Inputkan tidak memenuhi syarat untuk Jenis Laundry ini!");
            printf("\n\t\t  Silakan pilih Jenis yang sesuai!\n");
            printf("\t\t  Klik Enter...");
            getchar();
            input_data(); //jika salah memasukkan berat, maka akan memilih ulang jenis laundry//
            
        }else{
            return select; //jika pilihan benar, maka akan berlanjut ke proses selanjutnya dalam prosedur diatas//
        }
}

//prosedur untuk menghitung laundry, jika pilihan 2//
void satuan(){
	int s, sjumlah, sbanyak;
	char sbarang[100];
	int total_sbanyak;
	
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
	printf("\t\t|  4. Ketik '0' untuk kembali ke menu selanjutnya                                        |\n");
	printf("\t\t|--------------------------------------------+-------------------------------------------|\n");
	printf("\t\t|========================================================================================|\n");
	printf("\t\t  Jumlah Jenis Barang : ");
	proses.sjumlah = validasi3(); //bagian untuk menginputkan jumlah jenis barang yang dilaundry, kemudian divalidasi sebelum menjutkan proses eksekusi//
	//proses jika user ingin kembali ke menu sebelumnya//
	if(proses.sjumlah == 0){
		input_data(); //bagian jika user ingin kembali ke menu sebelumnya, maka akan inputkan angka 0//
		
	}else{
		//jika user tidak mengetikkan angka 0, maka proses akan berlajut//
	}
	printf("\t\t|----------------------------------------------------------------------------------------|\n");
	printf("\t\t  Deskripsikan Jenis Barang dan Banyaknya\n ");
	//pengulangan untuk meng-input-kan barang - barang yang dilaundry//
    for (s = 0; s < proses.sjumlah; ++s){
        printf("\t\t   - Barang ke-%d = ", s+1);
		scanf("%s%d", &proses.sbarang[s], &proses.sbanyak); //proses untuk menginputkan barang satu bersatu sesuai dengan jumlah jenis barang yang diinputkan//
    }
    printf("\t\t|========================================================================================|\n");
    printf("\t\t  Banyak Keseluruhan Barang : ");
    proses.total_sbanyak = validasi5();
	printf("\t\t|========================================================================================|\n");
	printf("\t\t|________________________________________________________________________________________|\n");
	jasa(); //bagian untuk menunjukkan proses selanjutnya//
}

//fungsi untuk mengecek inputan total banyak barang pada prosedur satuan//
double validasi5(){
    double pilihan, select;
    char enter;
        pilihan = scanf("%lf%c", &select, &enter);
        if (pilihan != 2 || enter != '\n'){
        	getchar();
        	printf("\t\t|----------------------------------------------------------------------------------------|\n");
            printf("\n\t\t  Inputan Anda Salah! Hanya Menerima Inputan Angka!\n");
            printf("\t\t  Masukkan Angka : ");
            return validasi5(); //jika inputannya salah, maka akan ulang meng-inputkan//
            
        }else{
            return select; //jika pilihan benar, maka akan berlanjut ke proses selanjutnya dalam prosedur diatas//
        }
}

//prosedur untuk meng-input-kan jasa pada laundry//
void jasa(){
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
	proses.jasa = validasi2(); //nagian untuk meng-input-kan pilihan jasa yang dipilih, kemudia divalidasi sebelum lanjut ke proses eksekusi//
	//proses untuk menunjukkan proses jika user memilih 0, jika tidak maka proses akan berlanjut//
	if(proses.jasa == 0){
		kiloan(); //statement jika user memilih 0, maka akan dialihkan ke menu sebelumnya//
		
	}else{
		layanan(); //jika user tidak memilih 0, maka proses akan berlanjut//
	}
	
	if(proses.jasa == 0){
		satuan(); //statement jika user memilih 0, maka akan dialihkan ke menu sebelumnya//
		
	}else{
		layanan(); //jika user tidak memilih 0, maka proses akan berlanjut//
	}

layanan(); //bagian untuk menunjukkan proses selanjutnya//
}

//fungsiuntuk mengecek inputan pada jasa//
double validasi2(){
    double pilihan, select;
    char enter;
        pilihan = scanf("%lf%c", &select, &enter);
        if (pilihan != 2 || enter != '\n'){
        	getchar();
            printf("\n\t\t  Inputan Anda Salah! Hanya Menerima Inputan Angka!\n");
            printf("\t\t  Masukkan Angka : ");
            return validasi2(); //jika inputannya salah, maka akan ulang meng-inputkan//
                
        }else if (select<0 || enter !='\n'){
            printf("\n\t\t  Pilihan yang Anda Masukkan Tidak Tersedia! Masukkan Angka (0/1/2/3/4/5) Saja!\n");
            printf("\t\t  Masukkan Angka Kembali : ");
            return validasi2(); //jika salah memasukkan pilihan, maka akan memilih ulang//
        
        }else if (select>5 || enter !='\n'){
            printf("\n\t\t  Pilihan yang Anda Masukkan Tidak Tersedia! Masukkan Angka (0/1/2/3/4/5) Saja!\n");
            printf("\t\t  Masukkan Angka Kembali : ");
            return validasi2(); //jika salah memasukkan pilihan, maka akan memilih ulang//
            
        }else{
            return select; //jika pilihan benar, maka akan berlanjut ke proses selanjutnya dalam prosedur diatas//
        }
}

//prosedur untuk meng-input-kan layanan pada laundry//
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
	printf("\t\t|  2. Layanan Express                        |      adalah 3 - 4 hari                    |\n");
	printf("\t\t|  0. Back                                   |   2. Estimasi selesai Layanan Express     |\n");
	printf("\t\t|                                            |      adalah 5 jam - 1 hari                |\n");
	printf("\t\t|--------------------------------------------+-------------------------------------------|\n");
	printf("\t\t|========================================================================================|\n");
	printf("\t\t|________________________________________________________________________________________|\n");
	printf("\t\t  Pilih Layanan Anda : ");
	proses.layanan = validasi1(); //bagian untuk meng-input-kan pilihan layanan, kemudian divalidasi sebelum lanjut ke proses eksekusi//
	//bagian untuk menunjukkan proses yang akan berjalan jika usr memilih 0, jika tidak maka akan lanjut ke proses selanjutnya//
	if(proses.layanan == 0){
		jasa(); //statement jika user memilih 0, maka akan dialihkan ke menu sebelumnya//
		
	}else{
		//jika user tidak memilih 0, maka proses akan berlanjut//
	}

transaksi();
getchar(); //agar prosedur transaksi terlihat//
}

void transaksi(){
	int pilihan, opsi; //prosedur input_data//
	int k, kjumlah, kbanyak; //prosedur kiloan//
	char kbarang[100];
	float berat_barang;
	int s, sjumlah, sbanyak; //prosedur satuan//
	char sbarang[100];
	int total_sbanyak; //variabel prosedur satuan untuk meyimpan total banyak barang satuan//
	int jasa, layanan;
	int nomor, //untuk mendapatkan nomor transaksi//
		biaya_jumlah; //variabel total tagihan harga total jumlah prosedur satuan//
	float biaya_berat, //variabel total tagihan harga berat barang per kg prosedur kiloan//
		total; //total tagihan keseluruhan//
	
	struct tm *Sys_T;
    time_t Tval;
    Tval = time(NULL);
    Sys_T = localtime(&Tval); // Untuk mendapatkan waktu lokal komputer //
    // Sys_T = gmtime(&Tval); // // Untuk mendapatkan waktu komputer berbasis GMT/UTC //
    
	system("cls");
	printf("\n\n\n\n\n");
	printf("\t\t ________________________________________________________________________________________ \n");
	printf("\t\t|========================================================================================|\n");
	printf("\t\t|==>                               *** JASA YUNA LAUNDRY ***                          <==|\n");
	printf("\t\t|----------------------------------------------------------------------------------------|\n");
	printf("\t\t  Nomor Transaksi : %0.dYN\n", &nomor);
	printf("\t\t  Tanggal Terima  : %d - %d - %d\n", Sys_T->tm_mday, Sys_T->tm_mon+1, 1900+Sys_T->tm_year);
	if(proses.layanan == 1){
		printf("\t\t  Tanggal Selesai : %d - %d - %d\n", Sys_T->tm_mday+4, Sys_T->tm_mon+1, 1900+Sys_T->tm_year);
	
	}else if(proses.layanan == 2){
		printf("\t\t  Tanggal Selesai : %d - %d - %d\n", Sys_T->tm_mday+1, Sys_T->tm_mon+1, 1900+Sys_T->tm_year);
	}
	printf("\t\t|----------------------------------------------------------------------------------------|\n");
	printf("\t\t|========================================================================================|\n");
	if(proses.pilihan == 1){
		printf("\t\t  DETAIL PESANAN KILOAN : \n");
		printf("\t\t  1. Berat Barang Kiloan           : %0.2f Kg\n", proses.berat_barang);
		printf("\t\t     Total Harga Berat Barang      : %0.2f X Rp. 6.000\n", proses.berat_barang);
		if(proses.jasa == 1){
			printf("\t\t  2. Jenis Jasa                    : Cuci Basah\n");

		}else if(proses.jasa == 2){
			printf("\t\t  2. Jenis Jasa                    : Cuci Kering\n");
		
		}else if(proses.jasa == 3){
			printf("\t\t  2. Jenis Jasa                    : Cuci Kering Setrika\n");
		
		}else if(proses.jasa == 4){
			printf("\t\t  2. Jenis Jasa                    : Setrika\n");
		
		}else if(proses.jasa == 5){
			printf("\t\t  2. Jenis Jasa                    : Dry Cleaning\n");
		
		}
	}
	//transaksi satuan//
	if(proses.pilihan == 2){
		printf("\t\t  DETAIL PESANAN SATUAN : \n");
		printf("\t\t  1. Total Banyak Barang Satuan    : %d Barang\n", proses.total_sbanyak);
		printf("\t\t     Total Harga Barang            : %d X Rp. 20.000\n", proses.total_sbanyak);
		if(proses.jasa == 1){
			printf("\t\t  2. Jenis Jasa                    : Cuci Basah\n");
		
		}else if(proses.jasa == 2){
			printf("\t\t  2. Jenis Jasa                    : Cuci Kering\n");
		
		}else if(proses.jasa == 3){
			printf("\t\t  2. Jenis Jasa                    : Cuci Kering Setrika\n");
		
		}else if(proses.jasa == 4){
			printf("\t\t  2. Jenis Jasa                    : Setrika\n");
		
		}else if(proses.jasa == 5){
			printf("\t\t  2. Jenis Jasa                    : Dry Cleaning\n");
		
		}
	}
	printf("\t\t|========================================================================================|\n");
	printf("\t\t  DETAIL HARGA TOTAL : \n");
	biaya_berat = proses.berat_barang * 6000;
	printf("\t\t  1. Total Tagihan Kiloan          : Rp. %0.f\n", biaya_berat);
	biaya_jumlah = proses.total_sbanyak * 20000;
	printf("\t\t  2. Total Tagihan Satuan          : Rp. %d\n", biaya_jumlah);
	if(proses.layanan == 1){
		layanan = 0;
		printf("\t\t  3. Layanan Reguler               : Rp. 0\n");
	}else if(proses.layanan == 2){
		layanan = 20000;
		printf("\t\t  3. Layanan Express               : Rp. 10.000\n");
	}
	printf("\t\t|----------------------------------------------------------------------------------------|\n");
	total = biaya_berat + biaya_jumlah + layanan;
	printf("\t\t  Total Tagihan Keseluruhan       : Rp. %0.f\n", total);
	printf("\t\t|========================================================================================|\n");
	printf("\t\t|________________________________________________________________________________________|\n");
	
}
