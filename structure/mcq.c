#include <stdio.h>
struct nain
{
	char x, y, z;
};
struct hello
{
	char x, y, z;
};

int main()
{
	struct hello struct nain vi = {'1', '0', 'c'};
	struct nain *p = &vi;
	printf("%c %c", *((*char)p + 1), *(p + 2));
	return 0;
}
// p->x