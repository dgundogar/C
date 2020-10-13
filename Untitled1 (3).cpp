#include <stdio.h>

int main()
{
	char n;
	int i;
	i = 0;
	printf(" Karakter giriniz; ");
	scanf("%c",&n);
	
	
	if (n >= 65 && n <=90)
	{
		i = n - 64;
		printf("%d. sayi",i);
	}
	else if (n >= 97 && n <= 122)
	{
		i = n - 96;
		printf("%d. sayi",i);
	}
	else
	{
		printf("Yanlýþ Bir Deðer Girdiniz.");
	}
	
	return 0;
	
}
