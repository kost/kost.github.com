#include <stdio.h>

int main (int argc, char *argv[]) {
	char buffer[80];
	strcpy (buffer,argv[1]);
	printf (buffer);
}
