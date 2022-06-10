#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;

int main (){
	char kalimat[1000];
	
	cout << "Masukkan kalimat = ";
	gets(kalimat);
	
	char *ptrKalimat = kalimat;
	
	int jmlKata = 1;
	while (*ptrKalimat != '\0')
	{
	
		if (*ptrKalimat == ' ')
		{
			jmlKata++;
		}
		ptrKalimat++;
	}
	
	cout << "Jumlah kata dalam kalimat " << kalimat << " adalah " << jmlKata <<endl;
	system("pause");
	return 0;
}
