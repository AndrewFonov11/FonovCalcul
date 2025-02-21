// FonovCalcul source code version 1.0

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
	printf("\nFonovCalcul v1.0");
	printf("\n\nMore details in 'README.md'");
	printf("\n\nCopyright (c) 2025 A. Fonov");
	do
	{
		printf("\n\nNumber 1-");
		scanf("%lf",&aa);
		printf("\n\nNumber 2-");
		scanf("%lf",&bb);
		printf("\n\n+,-,/,*,^,v,%%,e,l ?");
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
		printf("\n\nResult- %lf",cc);
	}
	while (vb != 'x');
	return 0;
}