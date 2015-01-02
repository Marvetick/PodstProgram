// programowanie.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdio.h"
#include "stdlib.h"
#include "string.h"
void tab(){
	char sign;
	int i = 0, n;
	char *buffer;
	while (scanf("%s", &sign)){
		
		if (i == 0){
			buffer = (char*)calloc(1,sizeof(char));
			buffer[i] = sign;
			i += 1;
		}
		else{
			buffer = (char*)realloc(buffer, i + 1);
			buffer[i] = sign;
			i += 1;
		}
		printf("Zawartosc bufera : %s\n", buffer);
	}
	if (buffer == NULL) exit(1);
	free(buffer);
}
int _tmain(int argc, _TCHAR* argv[])
{
	printf("Wpisuj litery po ka¿dej wciskajac enter.\n");
	//i = 0;
	tab();
	
	system("PAUSE");
	return 0;
}

