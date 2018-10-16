#include <stdio.h>

int main()
{
	int valueIn, valueCheck, valueStars = 0;
	printf("Menge der Sterne bitte eingeben:\n");
	scanf("%d",&valueIn);
	if(valueIn > 0)
	{
		valueCheck = 0;
		printf("\n\n");
		do
		{
		printf("*");
		valueCheck++;
		}while(valueCheck < valueIn);
		printf("\n\n");
		for(int valueLevels = valueCheck; valueLevels >= 0; valueLevels--)
		{
			valueStars = valueIn - valueLevels;
			while(valueStars > 0)
			{
				printf("*");
				valueStars--;		
			}
			printf("\n");
		}
		printf("\n");
		if(valueIn % 2 != 0){
			for(int valueFirstHalf = valueIn/2; valueFirstHalf>= 0;valueFirstHalf--)
			{
				printf(" ");
			}
			printf("*\n");
			valueCheck--;
			while(valueCheck >= 0)
			{
				valueCheck = valueCheck - 2;
				for(int valuePyrSpace = valueCheck/2;valuePyrSpace >= 0;valuePyrSpace--){
					printf(" ");
				}
				for(int valuePyrStars =valueIn - valueCheck;valuePyrStars > 0;valuePyrStars--)
				{
					printf("*");
				}
				printf("\n");
			}
		}else
			printf("Eingegebene Zahl ist gerade, keine Pyramide anwendbar");
		printf("\n\n");	
	}else
		printf("Falscheingabe, nur Zahlen groesser 0\n");
	return 0;
}
