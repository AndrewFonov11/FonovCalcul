// FonovCalcul source code version 0.2

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
	printf("\nFonovCalcul v0.2");
	printf("\n\nMore details in 'README.md'");
	do
	{
		printf("\n\nNumber 1-");
		scanf("%lf",&aa);
		printf("\n\nNumber 2-");
		scanf("%lf",&bb);
		printf("\n\n+,-,/,*,^,v ?");
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
		printf("\n\nResult- %lf",cc);
	}
	while (vb != 'x');
	return 0;
}