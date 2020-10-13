#include <stdio.h>

int main( )
{
	int n;
	printf("Lütfen bir n sayýsý giriniz: ");
	scanf("%d",&n);
	double toplam = 0;
	
	for (int i = 1; i <= n ; i++)
	{
		toplam+=  1/(double)i;
		printf("%f ",toplam);
	}
	
	
	return 0;
}
