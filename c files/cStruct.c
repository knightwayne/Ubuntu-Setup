#include<stdio.h>

struct st{
	int a;
	char b;
};

int main()
{
	struct st al;
	al.a=4;
	al.b='z';
	printf("%d %c", al.a, al.b);
	return 0;
}
