#include<stdio.h>
int main(){
	int input[100],i,n;
	char st='p';
	printf("\nEnter length:");
	scanf("%d",&n);
	printf("\nEnter string:");
	for(i=0;i<n;i++)
	scanf("%d",&input[i]);
	i=0;
	do{
		switch(st){
			case 'p':
				if(input[i]==0)
				st='q';
				else
				st='p';
				break;
			case 'q':
				if(input[i]==0)
				st='r';
				else
				st='p';
				break;
			case 'r':
				if(input[i]==0)
				st='r';
				else
				st='p';
				break;
		}

		i++;
	}while(i<n);
	if(st=='r')
	printf("Given string is ending with 00");
	else
	printf("Given string is not ending with 00");
}
