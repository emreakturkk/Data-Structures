#include <stdio.h>
#include <stdlib.h>
#define BOYUT 15

int ikiliArama(const int[], int, int , int);
int main(int argc, char **argv)
{
	int a[BOYUT], i, anahtar, sonuc;
	for(i=0; i<BOYUT; i++)
		a[i] = 2*i;
	printf("0 ile 28 : "); scanf("%d", &anahtar);

	// dizi indisi
	sonuc = ikiliArama(a,anahtar,0,BOYUT-1);

	if(sonuc != -1)
		printf("\%d\n",sonuc);
	else
		printf("\nBulunamadi\n");

	return 0;
}

int ikiliArama(const int b[],int aramaDegeri, int enAlt, int enUst)
{
	int orta;

	while (enAlt <= enUst)
	{
		orta = (enAlt+enUst)/2;
		if(aramaDegeri == b[orta])
			return orta;
		else if(aramaDegeri < b[orta])
			enUst = orta-1;

		else
			enAlt = orta+1;
	}

	return -1;
}
