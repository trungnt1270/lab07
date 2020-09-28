#include <stdio.h>

main11try3()
{
	int i, num[20];
	i = 0;
	
	do
	{
		printf("\nEnter the number : ");
		scanf("%d", &num[i]);
		i++;
	}while(i<5);
	
	for(--i;i>=0;i--)
	{
		printf("\n%d", num[i]);
	}
}
