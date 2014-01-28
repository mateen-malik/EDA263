/* $Header: https://svn.ita.chalmers.se/repos/security/edu/course/computer_security/trunk/lab/login_linux/login_linux.c 585 2013-01-19 10:31:04Z pk@CHALMERS.SE $ */

/* gcc -Wall -g -o mylogin login.linux.c -lcrypt */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
// #include <stdio_ext.h>
#include <stdio.h>
#include <string.h>
#include <signal.h>
#include <pwd.h>
#include <sys/types.h>
#include <crypt.h>
#include <unistd.h>
#include "pwent.h"

#define TRUE 1
#define FALSE 0
#define LENGTH 160

void sigh_2() {
  printf("Catching Ctrl-C\n");
}
void sigh_20() {
  printf("Catching Ctrl-Z\n");
}
void sigh_3() {
  printf("Catching Ctrl-\\\n");
}

int main(int argc, char *argv[]) {


 mypwent *pwd; /* this has to be redefined in step 2 */
	/* see pwent.h */

	char important[LENGTH] = "***IMPORTANT***";

	char user[LENGTH];
	//char   *c_pass; //you might want to use this variable later...
	char prompt[] = "password: ";
	char *user_pass;
	char *hash;

	signal(2, sigh_2);
	signal(20, sigh_20);
	signal(3, sigh_3);
	

	while (TRUE) {
		/* check what important variable contains - do not remove, part of buffer overflow test */
		printf("Value of variable 'important' before input of login name: %s\n",
				important);

		printf("login: ");
		fflush(NULL); /* Flush all  output buffers */
		__fpurge(stdin); /* Purge any data in stdin buffer */

		if (fgets(user, LENGTH, stdin) == NULL) /* gets() is vulnerable to buffer */
			exit(0); /*  overflow attacks.  */
		user[strlen(user) - 1] = '\0';
		
		if(!strcmp(user, "exit"))
		  return 0;
		
		/* check to see if important variable is intact after input of login name - do not remove */
		printf("Value of variable 'important' after input of login name: %*.*s\n",
				LENGTH - 1, LENGTH - 1, important);

		user_pass = getpass(prompt);
		pwd =  mygetpwnam(user);

		if (pwd != NULL) {
			/* You have to encrypt user_pass for this to work */
			/* Don't forget to include the salt */
			hash = crypt(user_pass, pwd->passwd_salt); 
			if (!strcmp(pwd->passwd, hash)) {

				printf(" You're in !\n");

			  pwd->pwfailed = 0;
		          pwd->pwage++;

			  if(!mysetpwent(user, pwd))
			    printf("Could not write to password file");

			  if(!setuid(pwd->uid))
			    printf("Could not set uid");
	   		 
			  if(!system("/bin/sh"))
			    printf("Could not exec sh");

			} else {
			  pwd->pwfailed++;
			  if(pwd->pwfailed > 2)
			    sleep(2);

			  if(!mysetpwent(user, pwd))
			    printf("Could not write to password file");
			}
		}
		printf("Login Incorrect \n");
	}
	return 0;
}
