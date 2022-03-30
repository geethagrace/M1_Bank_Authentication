#include<activity1.h>


/* to login to the created account */
void login()
{
	FILE *file;
	char a;
	char z[100];
	int e=0;
	file=fopen("geetha.txt","r");


	do
	{
		a=fgetc(file);
		z[e]=a;
		e++;
	}while(a!=EOF);
	z[e]=NULL;
       e=split(z);
       if(e==1)
       {
	       printf("\n ...login failed");
       }
}


/* to create an entry */
void create()
{
	FILE *file;
	char user[100],pass[100];
	file=fopen("geetha.txt","a");

	printf("Enter the username : ");
	scanf("%s",user);
	printf("Enter the password : ");
	scanf("%s",pass);
	strcat(user," ");
	strcat(user,pass);
	strcat(user," ");
	strcat(user,"500");
	strcat(user,"\n");
	printf("%s",user);
	fprintf(file,"%s",user);


	fclose(file);
}
