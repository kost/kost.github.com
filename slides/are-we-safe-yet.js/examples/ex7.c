#include <stdio.h>
#include <string.h>

typedef struct {
	char	name[16];
	char	password[18];
	char	privilege;
} person;

int auth (char *username) {
	printf("Authenticating %s...\n",username);
	person tmp;
	tmp.privilege = 'U';
	strcpy (tmp.name,username);

	printf("Authenticated as %s and privilege %c\n", tmp.name, tmp.privilege);
	printf("[DEBUG] Authenticated as %s with password %s and privilege %c\n", tmp.name, tmp.password, tmp.privilege);

	if (tmp.privilege == 'A') {
		printf("Welcome admin!\n");
	} else {
		printf("Welcome user!\n");
	}

	return(0);
}

void main (int argc, char *argv[]) {
	int ret;
	ret=auth (argv[1]);
}


