#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int split(char a[1000])
{
	FILE *file;
	char user[100],password[100],chkuser[3][100];
	char all_user[10][100];
	char da[100];
	int y,e=0,n=0,r,d=1,dr=0,yr,rz;

	printf("Enter the username : ");
	scanf("%s",user);
	printf("Enter the password : ");
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
		rz=y;
		printf("\n%s Thank you for login",user);
		d=0;
		for(;;)
		{
		    printf("\n Choose the operation to perform : ");
			printf("\n 1.Balance 2.Deposit 3.Withdraw 4.Logout");
			printf("\n Enter an option : ");
			scanf("%d",&y);
			if(y==1)
			{
				printf("%s",chkuser[2]);
			}
			else if(y==2)
			{
				printf("\n Deposit amount : ");
				scanf("%d",&yr);
				yr=yr+atoi(chkuser[2]);
				strcpy(chkuser[2],itoa(yr, chkuser[2], 10));
                printf("%s",chkuser[2]);

			}
			else if(y==3)
			{
				printf("\n Withdraw amount : ");
				scanf("%d",&yr);
				yr=atoi(chkuser[2])-yr;
				strcpy(chkuser[2],itoa(yr, chkuser[2], 10));
				printf("%s",chkuser[2]);
			}
			else
			{
				strcat(chkuser[0]," ");
				strcat(chkuser[0],chkuser[1]);
				strcat(chkuser[0]," ");
				strcat(chkuser[0],chkuser[2]);
				strcpy(all_user[rz],chkuser[0]);
				break;
			}

		}

	}

	}
	for(y=0,rz=0;y<e;y++)
	{
		for(n=0;all_user[y][n]!=NULL;n++)
		{
		   a[rz++]=all_user[y][n];
		}
		a[rz++]='\n'																			     ;
	}
	a[rz]=NULL;
	file=fopen("geetha.txt","w");
	fprintf(file,"%s",a);
	fclose(file);
	return d;

}
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
int main()
{
	int g;
	printf("AUTHENTICATION SYSTEM FOR BANKING APPLICATION\n");
	printf("1.Create Account 2.Login account ");
	printf("\n Enter your choice : ");
	scanf("%d",&g);
	switch(g)
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


