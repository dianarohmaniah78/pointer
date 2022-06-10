#include <iostream>
using namespace std;

int main(){
	char kampus[] = "STMIK AMIKOM";
	
	int length = sizeof(kampus) / sizeof(char);
	
	for (int i = 0; i < length; i++)
	{
		cout << kampus[i];
	}
	cout << "jika dibalik menjadi";
	
	char *ptrKampus = kampus;
	for (int i = length - 1; i >= 0; i--)
	{
		cout << ptrKampus[i];
	}
	
	cout <<endl <<endl;
	system("pause");
	return 0;
}
