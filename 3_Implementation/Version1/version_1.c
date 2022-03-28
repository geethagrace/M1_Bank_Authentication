#include<stdio.h>
#include<string.h>
int split(char *a);
int split(char *a)
{
	char user[100],password[100],chkuser[3][100];
	char all_user[10][100];
	char da[100];
	int y,e=0,n=0,r;
	int d=1,dr=0;
        printf("\n welcome to login section....\n ");
	printf("Enter the username :");
	scanf("%s",user);
	printf("Enter the password :");
	scanf("%s",password);
	for(y=0;a[y]!=NULL;y++)
	{
		if(a[y]=='\n')
		{
			da[n]=NULL;
			strcpy(all_user[e++],da);
			strcpy(da,"");
			n=0;
		}
		else
		{
			da[n++]=a[y];
		}
	}

        for(y=0;y<e;y++)
	{
	dr=0,r=0;
		for(n=0;all_user[y][n]!=NULL;n++)
		{
			if(all_user[y][n]==' ')
			{
			     chkuser[dr][r]=NULL;
			     dr++;
			     r=0;
			}
			else
			{
			 chkuser[dr][r]=all_user[y][n];
			 r++;
			}
		}

	if(strcmp(chkuser[0],user)==0 && strcmp(chkuser[1],password)==0)
	{
		printf("\n\n%s....Thank you for login",user);
		d=0;
		break;
	}

	}
	return d;
}
void login()
{
	FILE *file;
	char a;
	char z[100];
	int e=0;
	file=fopen("Geetha.txt","r");

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
	        printf("\n\n Illegal entry....Login Failed");
        }
}

void create()
{
	FILE *file;
	char user[100],pass[100];
	file=fopen("Geetha.txt","a");

        printf("\n welcome to create an entry......\n");
	printf("Enter the username :");
	scanf("%s",user);
	printf("Enter the password :");
	scanf("%s",pass);
	strcat(user," ");
	strcat(user,pass);
	strcat(user," ");
	strcat(user,"500");
	strcat(user,"\n");
	printf("%s",user);
	printf("\n ....entry created....\n");
	fprintf(file,"%s",user);

        fclose(file);
}
int main()
{
	int y;
	printf("AUTHENTICATION SYSTEM\n");
	printf("1.Create Account\n2.Login account\n");
	printf("Enter your choice : ");
	scanf("%d",&y);
	switch(y)
	{
	    case 1:
		   create();
		   break;
            case 2:
                   login();
                   break;
            default:
                   printf("\n wrong entry.......");
	}
}

