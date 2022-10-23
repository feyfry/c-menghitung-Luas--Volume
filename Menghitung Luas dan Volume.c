//Source Code by FaizMickala - You Can Remove This Line If You Want
#include <stdio.h>

int main() {
	float jt, t, LP_Tabung, jb, LP_Bola, Vol_Tabung, Vol_Bola;
	int pilih;
	char pilih1;
	
	printf("Program Menghitung Luas Permukaan dan Volume dari Tabung dan Bola \n");
	printf("\nHitung Luas\n");
	printf("1. Hitung Luas Permukaan Tabung \n");
	printf("2. Hitung Luas Permukaan Bola \n");
	printf("\nHitung Volume\n");
	printf("3. Hitung Volume Tabung\n");
	printf("4. Hitung Volume Bola \n");
	
	printf("\nMasukkan Pilihan Anda: ");
	scanf("%d", &pilih);
	
	if (pilih == 1) {
		printf ("\nMasukkan Jari-Jari Tabung: ");
			scanf ("%f", &jt);
			
			printf ("Masukkan Tinggi Tabung: ");
			scanf ("%f", &t);
			
			LP_Tabung = 2*3.14*jt*(jt+t);
			printf ("\nLuas Permukaan Tabung Adalah %.2f", LP_Tabung);
	}
	
	else if (pilih == 2) {
		printf ("\nMasukkan Jari-Jari Bola: ");
		scanf ("%f", &jb);
			
		LP_Bola = 4*3.14*jb*jb;
		printf ("Luas Permukaan Bola Adalah %f", LP_Bola);
	}
	
	else if (pilih == 3) {
		printf ("\nMasukkan Jari-Jari Tabung: ");
		scanf ("%f", &jt);
			
		printf ("Masukkan Tinggi Tabung: ");
		scanf ("%f", &t);
			
		Vol_Tabung = 3.14*jt*jt*t;
		printf ("\nVolume Tabung Adalah %f", Vol_Tabung);
	}
	
	else if (pilih == 4) {
		printf ("\nMasukkan Jari-Jari Bola ");
		scanf ("%f", &jb);
			
		Vol_Bola == (4/3)*3.14*jb*jb*jb;
		printf ("Volume Bola Adalah %f", Vol_Bola);
	}
	
	else {
		printf ("Pilihan Anda Ngawur");
	}
	
	return 0;
}
