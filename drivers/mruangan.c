#include "ruangan.h"
#include "player.h"
#include <stdio.h>

int main(int argc, char const *argv[])
{
	Ruangan Kosan;

	// BacaRuangan(&Kosan,"kosan.txt");
	// printf("Nama ruangan : %s\n", Nama(Kosan) );
	// CetakRuangan(Kosan);

	// POINT pmeja1 = FindObjek(Kosan,'1');
	// printf("Posisi meja 1 adalah : ");
	// TulisPOINT(pmeja1);
	// printf("\n");

	// printf("Posisi meja 2 adalah : ");
	// TulisPOINT(FindObjek(Kosan, '2'));
	// printf("\n");

	// printf("Posisi pemain : ");
	// TulisPOINT(FindObjek(Kosan,'P'));
	// printf("\n");


	// printf("Mari kita jalan dikit ke kiri\n");

	// printf("Kalo bisa kita bakal di : ");
	// TulisPOINT(PlusDelta(FindObjek(Kosan,'P'),0,-1));
	// printf("\n");



	// if(BisaGerak(Kosan, 'P', 4)){
	// 	GerakO(&Kosan, 'P', 4);
	// } else {
	// 	printf("Ooops invalid move\n");
	// }

	// CetakRuangan(Kosan);

	Ruangan Dapur;
	BacaRuangan(&Dapur, "dapur.txt");
	
	CetakRuangan(Dapur);

	// Ruangan RM;
	// BacaRuangan(&RM, "ruangmakan.txt");
	// CetakRuangan(RM);

	// Ruangan Satu,Dua,Tiga,Empat;
	// char ans;

	// BacaRuangan(&Satu, "satu.txt");
	// BacaRuangan(&Dua, "dua.txt");
	// BacaRuangan(&Tiga, "tiga.txt");
	// BacaRuangan(&Empat, "empat.txt");

	// CetakRuangan(Satu);

	// printf("lanjut?\n");
	// scanf("%c", &ans);
	// CetakRuangan(Dua);

	// printf("lanjut?\n");
	// scanf("%c", &ans);
	// CetakRuangan(Tiga);

	// printf("lanjut?\n");
	// scanf("%c", &ans);
	// CetakRuangan(Empat);	
//	CreateRuangan(&Kosan,"kamarkuh",3,3);
//	CetakRuangan(Kosan);


	return 0;
}