#include<stdio.h>
#include<stdbool.h>

bool checkNumber(int value, int bitValue)
{
	int bitPosition = 1, valueBuffer = value; 
	bool result = false;
	if(value <= 255 && value >= 0)
	{
		if(bitValue >= 1 && bitValue <= 8)
		{
			for(int timer = 1; timer < bitValue; timer++)
			{
				bitPosition <<= 1;
			}
			valueBuffer |= bitPosition;
			printf("Wert nach Bit setzen = %d.\n", valueBuffer);
			if(valueBuffer == value)
			{
				result = true;
				printf("Wert entspricht dem alten, Bit war gesetzt.\n");
			}else
			{
				printf("Wert entspricht nicht dem alten, Bit war nicht gesetzt.\n");
			}
			bitPosition = ~bitPosition;
			valueBuffer = value;
			valueBuffer &= bitPosition;
			printf("Wert nach Bit loeschen = %d.\n", valueBuffer);
			if(valueBuffer == value)
			{
				printf("Wert entspricht dem alten, Bit war nicht gesetzt.\n");
			}else
			{
				printf("Wert entspricht nicht dem alten, Bit war gesetzt.\n");
			}
		}else
		{
			printf("Die Bitstelle muss zwischen 1 und 8 liegen");
		}
	}else
	{
		printf("Die Zahl muss zwischen 255 und 0 liegen!\n");
	}
	return result;
}

int main()
{
	int value = 4;
	int bitValue = 3;
	printf("Zahl bitte eingeben:\n");
	scanf("%d", &value);
	printf("Bitstelle bitte eingeben:\n");
	scanf("%d", &bitValue);
	bool result = checkNumber(value, bitValue);
	printf("Ergebnis ob Bit gesetzt: %s\n",result?"richtig":"falsch");
}


