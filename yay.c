#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main()
{
	srand(time(NULL));
	while(1)
	{
		char *opts = malloc(100);
		strcpy(opts, "sl ");
		printf("\a");
		if(rand() % 2)
		{
			strcat(opts, "-a ");
		}
		if(rand() % 2)
		{
			strcat(opts, "-e ");
		}
		if(rand() % 2)
		{
			strcat(opts, "-F ");
		}
		if(rand() % 2)
		{
			strcat(opts, "-l ");
		}
		strcat(opts, "\n");
		system(opts);
		free(opts);
	}
	return 0;
}
