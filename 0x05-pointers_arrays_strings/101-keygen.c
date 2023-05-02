#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 6

int main(void)
{
	char password[PASSWORD_LENGTH + 1];
	int i;
    
	srand(time(NULL));
	for (i = 0; i < PASSWORD_LENGTH; i++) 
	{
		password[i] = rand() % (126 - 33 + 1) + 33;
	}
	password[PASSWORD_LENGTH] = '\0';
	printf("%s", password);
	return (0);
}
