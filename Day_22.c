

#include <stdio.h>
union VECTOR{

	int a:2;
	unsigned int b:3;
};

int main()
{
	union VECTOR Yella;
	Yella.a=3;
	printf("%d\n",Yella.a);
	Yella.b=5;
	printf("%d\n",Yella.b);
	return 0;
}

