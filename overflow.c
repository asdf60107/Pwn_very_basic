#include <stdio.h>

void hacker()

{
	printf("No, I am a hacker!\n");
}

void nonSecure()
{
	char name[16];
	printf("what is your name?\n");
	gets(name);
	printf("Hey %s,you are harmless , aren't you ?\n",name);
}

int main ()
{
	nonSecure();
	return 0 ;
}