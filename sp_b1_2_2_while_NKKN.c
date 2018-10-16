#include <stdio.h>
#include <math.h>

int main()
{
	double radian = 0, sinus = 0, grad = 0;
	while(grad <= 360)
	{
		radian = grad * M_PI / 180;
		sinus = sin(radian);
		printf("Winkel\t%g\t Grad => Sinus-Funktionswert: %6.3f\n", grad, sinus);
		grad = grad + 10;
	}
	return 0;	
}
