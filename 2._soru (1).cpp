#include <stdio.h>

int main()
{
	int n;
	printf("Bir sayý giriniz: ");
	scanf("%d",&n);
	int i;
	i = 0;
	int toplam;
	toplam = 0;
	int carpim;
	carpim = 1;
	int deneme = n;
	
	while (deneme >= 0) 
	{
		toplam = toplam + deneme;
		deneme --;
		
	}
	
	
	
	for (int j = 1; j <= n; j++)
	{
		carpim = carpim * j;
		
	}
	printf("toplam = %d\n",toplam);
	printf("çarpým = %d",carpim);
}
