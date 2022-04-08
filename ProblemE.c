#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_SIZE 1000

int main()
{
	char str[MAX_SIZE];
	
	scanf("%s", str);
	
	str[0] = toupper(str[0]);

	printf("%s", str);

	return 0;
}