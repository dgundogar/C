#include <stdio.h>

int main()

{
	int x;
	printf("L�tfen bir x say�s� giriniz: ");
	scanf("%d",&x);
	int n;
	int min, max;
	
	printf("1. de�eri giriniz: ");
		scanf("%d",&n);
		min = n;
		max = n;
	
	
	
	for (int i = 1; i <= x- 1; i ++)
	{
		printf("%d. de�eri giriniz: ",i+1);
		scanf("%d",&n);
		
		
		if (n < min )
		{
			min = n;
			
		}
		else if (n > max )
		{
			
			max = n;
		}
	
	
	}
	printf(" max = %d\n",max);
	printf(" min = %d",min);
	return 0;
	
}
