// FonovCalcul source code version 0.1

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
	printf("\nFonovCalcul v0.1");
	printf("\n\nMore details in 'README.md'");
	do
	{
		printf("\n\nNumber 1-");
		scanf("%lf",&aa);
		printf("\n\nNumber 2-");
		scanf("%lf",&bb);
		printf("\n\n+,-,/,*,^ ?");
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
		printf("\n\nResult- %lf",cc);
	}
	while (vb != 'x');
	return 0;
}