#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main()
{
	char ch;
	while ((ch = _getch()) != 'X')
	{
		if (ch >= '0' && ch <= '9')
			continue;
		printf("%c", ch);
	}
	printf("\n");

	return 0;
}
