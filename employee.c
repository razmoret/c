#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{

	int i = 0;
	i = i + 5;
#ifdef DEBUG
	printf("debug!!\n");
#else
	printf("no debug!!\n");
#endif

	return 0;
}
