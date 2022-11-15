#include <stdio.h>

char *proverb="All that glisters is not gold.";

void setPointer(char **q)
{
	/*printf("q: %p\n", q);
	printf("q: %s\n", q);
	printf("*q: %p\n", *q);
	
	printf("proverb: %p\n", proverb);
	printf("proverb: %s\n", proverb); */

	*q = proverb;
}
	
int main(void)
{
	char *p = "zzz";
/*rintf("p: %p\n", p);
	printf("p: %s\n", p);
	printf("*p: %p\n", *p); */
	
	setPointer(&p);
	printf("res: %s\n", p);
	return 0;
}
