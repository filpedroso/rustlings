#include <stdio.h>

void call_me(int times)
{
	for (int i = 0; i < times; i++)
	{
		printf("Ring! Call number %i\n", i);
	}
}
int main ()
{
	call_me(900000);
}