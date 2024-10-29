#include <stdio.h>


int main(){

	int a = 0x20000001;
	char *p;
	p = (char *)&a;

	printf("value of a is 0x20000001\n single byte pointer, which points at the lowest memory address of a, has a value of %d\n system is little Endian since it stores the least significant byte in the lowest memory address\n",*p);

	int *pnt;
	pnt = &a;
	printf("the full address of a is %p\nwhich is 64-bits\n",pnt);


	return 0;
}
