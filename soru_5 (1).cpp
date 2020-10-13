#include <stdio.h>

int main()
{
	int n;
	printf("Lütfen bir n sayýsý giriniz: ");
	scanf("%d",&n);
	int birinci_sayi = 1;
	int ikinci_sayi = 1;
	int toplam = 0;
	printf("%d\t%d\n",birinci_sayi, ikinci_sayi );
	

	
	for (int k = 0; k < n; k++);
	{
		
		toplam = birinci_sayi + ikinci_sayi;
		birinci_sayi = ikinci_sayi;
		ikinci_sayi = toplam;
		printf("%d", ikinci_sayi );
		
		
	}
	

	
	
	return 0;
	
}
