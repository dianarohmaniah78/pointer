#include <iostream>
#include <stdio.h>
#include <cctype>
#include <conio.h>
#include <windows.h>
using namespace std;

int main (){
	char kalimat[10000];
	string Upcs, Lwcs, awal, awalkal, awalkap;
	int kata = 1;
	int menu;
	char jawab;
	
	char *ptrKal = kalimat;
	
	kal:
	cout << "Masukkan kalimat : ";
	gets(kalimat);
	
	for (int i = 0; i < strlen(ptrKal); i++){
		Upcs = toupper(ptrKal[i]);
		
		cout << Upcs;
	}
	cout << "\n adalah kalimat yang telah diubah menjadi huruf kapital" <<endl;
	cout << endl;
	
	awal:
		if (ptrKal[0] != '\0')
		{
			awalkal = toupper(ptrKal[0]);
			cout << awalkal;
		}
		
	for (int i = 1; i < strlen(ptrKal); i++)
	{
		awal = tolower(ptrKal[i]);
		cout << awal;
	}
	
	cout << "\nKalimat yang telah diubah menjadi huruf kapital diawal " <<endl;
	cout<<endl;
	
	low:
	for (int i = 0; i < strlen(ptrKal); i++)
	{
		Lwcs = tolower(ptrKal[i]);
		cout << Lwcs;
	}
	cout << "\nKalimat yang telah diubah menjadi huruf kecil " <<endl;
	cout << endl;
	
	jum:
	while (*ptrKal != '\0')
	{
		if (*ptrKal == ' ')
		{
			kata++;
		}
		ptrKal++;
	}
	
	cout << "Jumlah kata : " << kata <<endl;
	cout << endl;
	
	cout << "Terima kasih telah menggunkan program ini" <<endl;
		getch();
		return 0;
}
