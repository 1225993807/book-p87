#include<stdio.h>
void hanoi(int n, char a, char b, char c);
int main()
{
	int x;
	printf("请输入个数:\t");
	scanf_s("%d", &x);
	hanoi(x, 'a', 'b', 'c');
	printf("\n");
	return 0;
}


void hanoi(int n, char a, char b, char c)
{
	if (n >= 2)
	{
		hanoi(n - 1, a, c, b);
		printf("\t将%d号从%c->%c\n ", n, a, c);
		hanoi(n - 1, b, a, c);
	}

	else if (n == 1)
		printf("\t将1号从%c->%c\n", a, c);

	else("无任何圆盘");
}