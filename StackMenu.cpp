#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

#define maxsize 100

struct stack {
	int top;
	int value[maxsize];
};							
struct stack s;
void push(struct stack* ps, int x) 
{
		if (ps->top == maxsize - 1 )
		{
			printf("Sira dolu. Eklemek icin eleman cikariniz.\n");
		}
		else 
		{
			ps->value[(ps->top)++] = x;
		}
}
void pop(struct stack* ps)
{
	if (ps->top == 0) 
	{
		printf("Sira bos. \n");
	}
	else
	{
		int temp = ps->top;
		printf_s("\nSilinen Sayi: %d\n ", s.value[temp-1]);
		ps->top--;		
	}
}
int main()
{
	int sayi = 0;
	while (1) 
	{
		printf("Menu: \n 1. Ekle\n 2. Sil \n 3. Listele\n 4. Cikis\n");
		scanf_s("%d", &sayi);
		switch (sayi)
		{
			case 1:
				printf("Eklemek istediginiz sayiyi girin:");
				int ekle;
				scanf_s("%d", &ekle);
				push(&s, ekle);
				break;
			case 2:
				pop(&s);
				printf("Silinmis Liste:");
				for (int i = 0; i < s.top; i++)
					printf("%d ", s.value[i]);
				printf("\n");
				break;
			case 3:
				if (s.top == 0)
					printf("Liste bos\n");
				else
					printf("\nListe:");
				for (int i = 0; i < s.top; i++)
					printf("%d ", s.value[i]);
				printf("\n");
				break;
			case 4:
				exit(0);
			default:
				printf("Yanlis Secim. \n");
		}
	}
	return 0;
}