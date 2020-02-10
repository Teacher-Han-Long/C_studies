#include <stdio.h>

int main(void) {
	
	int a;
	int *p1;
	int *p2;
	
	p1 = &a;
	a = 5;
	p2 = p1;
	
	printf("%p \n", p1);
	printf("%d \n", a);
	printf("%p \n", &a);
	printf("%p \n ", &p1);
	printf("%i \n ", *p1);
	
	*p1 = 100;
	printf("%d \n", a);	

	*p2 = 200;
	printf("%d \n ", *p1);

}