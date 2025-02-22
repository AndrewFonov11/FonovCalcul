// FonovCalcul source code version 1.1

// Licensed under the MIT License

// More details in 'README.md'

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

int main()
{
	double aa,bb,cc;
	char vb;
	system("cls");
	printf("\nFonovCalcul v1.1");
	printf("\n\nMore details in 'README.md'");
	printf("\n\nCopyright (c) 2025 A. Fonov");
	do
	{
		printf("\n\nNumber 1-");
		scanf("%lf",&aa);
		printf("\n\nNumber 2-");
		scanf("%lf",&bb);
		printf("\n\nWhen working with trigonometry functions, enter data in radians!");
		printf("\n\nFor operations starting with 'e' (and further), the entered value = number 1 + number 2.");
		printf("\n\n+,-,/,*,^,v,%%,e,l,s,c,t ?");
		vb = getch();
		if (vb == '+')
		{
			cc = aa + bb;
		}
		if (vb == '-')
		{
			cc = aa - bb;
		}
		if (vb == '/')
		{
			cc = aa / bb;
		}
		if (vb == '*')
		{
			cc = aa * bb;
		}
		if (vb == '^')
		{
			cc = pow(aa,bb);
		}
		if (vb == 'v')
		{
			cc = pow(aa, 1.0 / bb);
		}
		if (vb == '%')
		{
			cc = aa * bb / 100;
		}
		if (vb == 'e')
		{
			cc = exp(aa+bb);
		}
		if (vb == 'l')
		{
			cc = log(aa+bb);
		}
		if (vb == 's')
		{
			cc = sin(aa+bb);
		}
		if (vb == 'c')
		{
			cc = cos(aa+bb);
		}
		if (vb == 't')
		{
			cc = tan(aa+bb);
		}
		printf("\n\nResult- %lf",cc);
	}
	while (vb != 'x');
	return 0;
}