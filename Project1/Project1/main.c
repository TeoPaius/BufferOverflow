#include <stdio.h>
#include <stdlib.h>
#include <string.h>





void overFlowMe(char f)
{
	char a[3] = "aa";
	char b[3] = "bb";

	if (&a > &b)
		strcpy(a, "\x1\x1\x2\x3\x1\x1\x2\x3\xef\xbe\xad\xde");
	else
		strcpy(b, "\x1\x1\x2\x3\x1\x1\x2\x3\xef\xbe\xad\xde");

	return;
}

int main(int argc, char **argv)
{
	int a = 10;
	int b = 20;
	
	overFlowMe('f');


	return;
}