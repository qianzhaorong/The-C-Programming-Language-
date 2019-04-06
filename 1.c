#include <stdio.h>

typedef struct A{
	int a;
}A;

typedef struct B{
	struct A a;
	int b;
}B;

int main(void)
{
	B banana = {{1}, 2};
	printf("%d\n", banana.a.a);
	A *apple = &banana;
	printf("%d\n", apple->a);
	return 0;
}
