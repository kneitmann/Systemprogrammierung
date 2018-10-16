#include<stdio.h>
#include<math.h>

int main()
{
	double sinus = 0, radian = 0;
	for(int grad = 0; grad <= 360; grad = grad + 10)
	{
		radian = grad * M_PI / 180;
		sinus = sin(radian);
		printf("Winkel\t%d\t Grad => Sinus-Funktionswert: %6.3f\n", grad, sinus);
	}
	return 0;
}
