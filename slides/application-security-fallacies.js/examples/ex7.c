#include <stdio.h>
#include <string.h>

typedef struct {
	char	name[16];
	char	password[18];
	char	privilege;
	char 	description[20];
} person;

int auth (char *username) {
	printf("Authenticating %s...\n",username);
	person tmp;
	strcpy (tmp.password,"");
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

int main (int argc, char *argv[]) {
	int ret;
	ret=auth (argv[1]);

	return(0);
}


