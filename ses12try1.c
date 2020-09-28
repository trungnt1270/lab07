#include <stdio.h>
#include <string.h>

main12try1()
{
	int i, max, min, num[50],str;
	printf("\nEnter the length of string : ");
	scanf("%d", &str);
	for(i=0;i<str;i++)
	{
		printf("\nEnter the value : ");
		scanf("%d", &num[i]);
		if(i==0)
		{
			max=num[i];
			min=num[i];
		}
		else
		{
			if(num[i]>max)
				max=num[i];
			if(num[i]<min)
				min=num[i];
		}
	}
	printf("\nThe max value in array is : %d", max);
	printf("\nThe min value in array is : %d", min);
}
