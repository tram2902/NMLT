#include<stdio.h>
#include<conio.h>
void main()
{
	int a, b,c;
	printf("nhap a va b ");
	scanf("%d%d", &a ,& b);
	if (a % b == 0)
	{
		printf("a la boi cua b");
  }
	else
		printf("a khong la boi cua b");
	getch();
}
