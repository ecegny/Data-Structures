#include <stdio.h> 
#include <stdlib.h> 
#include<time.h> 
#include <ctime>
void YERLESTIRMELI(int yerles[],int size) {
	for (int i = 0; i < size; i++)
	{
		for (int j = i; j > 0; j--)
		{
			if (yerles[j] < yerles[j - 1])
			{
				int temp;
				temp = yerles[j];
				yerles[j] = yerles[j - 1];
				yerles[j - 1] = temp;
			}
			else
				break;
		}
	}
	printf("\n\n\nYERLESTIRMELI SIRALAMA ILE: \n");
	for (int a = 0; a < size ; a++)
	{
		printf("%d ", yerles[a]);
	}
}
void DIREKT(int direkt[], int size) {
	for (int i = 0; i < size; i++)
	{
		int temp = direkt[i];
		int j = i;
		while (j > 0 && direkt[j - 1] > temp)
		{
			direkt[j] = direkt[j - 1];
			j--;
		}
		direkt[j] = temp;
	}
	printf("\n\n\nDIREKT DEGISMELI SIRALAMA ILE: \n");
	for (int a = 0; a < size ; a++)
	{
		printf("%d ", direkt[a]);
	}
}
void IKILI(int ikili[], int size) {
	for (int i = 0; i < size; i++) {
		int temp = ikili[i];
		int bottom = 0;
		int top = i - 1;
		while (bottom <= top) {
			int pivot = (bottom + top) / 2;
			if (temp < ikili[pivot]) {
				top = pivot - 1;
			}
			else {
				bottom = pivot + 1;
			}
		}
		for (int j = i - 1; j >= bottom; --j) {
			ikili[j + 1] = ikili[j];
		}
		ikili[bottom] = temp;
	}
	printf("\n\n\nIKILI YERLESTIRILMIS SIRALAMA ILE: \n");
	for (int a = 0; a < size; a++)
	{
		printf("%d ", ikili[a]);
	}
}
void SECMELI(int secmeli[], int size) {
	for (int i = 0; i < size - 1; i++)
	{
		int min = i;
		for (int j = i + 1; j < size ; j++)
		{
			if (secmeli[j] < secmeli[min])
				min = j;
		}
		int temp;
		temp = secmeli[i];
		secmeli[i] = secmeli[min];
		secmeli[min] = temp;
	}
	printf("\n\n\nSECMELI SIRALAMA ILE: \n");
	for (int a = 0; a < size ; a++)
	{
		printf("%d ", secmeli[a]);
	}
}
void KABARCIK(int bubble[], int size) {
	for (int i = size - 1 ; i > 0; i--)
	{
		for (int j = 0; j < i; j++)
		{
			if (bubble[j] > bubble[j + 1])
			{
				int t;
				t = bubble[j + 1];
				bubble[j + 1] = bubble[j];
				bubble[j] = t;
			}
		}
	}
	printf("\n\n\nBUBBLE SORT SIRALAMA ILE: \n");
	for (int a = 0; a < size; a++)
	{
		printf("%d ", bubble[a]);
	}
}
void ZAMAN(float salise) {
	int dakika = salise / 3600;
	int saniye = (salise -(3600*dakika))/60;
	salise = (salise - (3600 * dakika) - (saniye * 60));
	printf("\n\nSIRALAMADA GECEN TOPLAM SURE = dakika:saniye:salise -> %d:%d:%f \n", dakika,saniye,salise);
}
int main()
{
	srand(time(0));
	int dizi[1000];
	int size = sizeof(dizi) / sizeof(dizi[0]);
	for (int i = 0; i < size; i++) 
	{
		dizi[i]=rand()%500+1;
	}
	printf("\nRANDOM LISTE: \n");
	for(int a = 0 ; a< size ; a++)
	{
		printf("%d ", dizi[a]);
	}
	clock_t begin;
	clock_t finish;
	begin = clock();
	YERLESTIRMELI(dizi,size);
	finish = clock();
	float diff1 = ((float)(finish-begin) / CLOCKS_PER_SEC) * 60;
	ZAMAN(diff1);
	begin = clock();
	DIREKT(dizi, size);
	finish = clock();
	float diff2 = ((float)(finish - begin) / CLOCKS_PER_SEC) * 60;
	ZAMAN(diff2);
	begin = clock();
	IKILI(dizi, size);
	finish = clock();
	float diff3 = ((float)(finish - begin) / CLOCKS_PER_SEC) * 60;
	ZAMAN(diff3);
	begin = clock();
	SECMELI(dizi, size);
	finish = clock();
	float diff4 = ((float)(finish - begin) / CLOCKS_PER_SEC) * 60;
	ZAMAN(diff4);
	begin = clock();
	KABARCIK(dizi, size);
	finish = clock();
	float diff5 = ((float)(finish - begin) / CLOCKS_PER_SEC) * 60;
	ZAMAN(diff5);
	return 0;
}
