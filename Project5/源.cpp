#include<stdio.h>
void hanoi(int n, char a, char b, char c);
int main()
{
	int x;
	printf("���������:\t");
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
		printf("\t��%d�Ŵ�%c->%c\n ", n, a, c);
		hanoi(n - 1, b, a, c);
	}

	else if (n == 1)
		printf("\t��1�Ŵ�%c->%c\n", a, c);

	else("���κ�Բ��");
}