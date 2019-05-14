#include <stdio.h>

int printargs (char *arg) {
	char buffer[10];
	strcpy (buffer,arg);
	printf (buffer);
}

int main (int argc, char *argv[]) {
	printargs (argv[1]);
}

