#include<stdio.h>
int main(){
	int input[100],i,n;
	char st='p';
	printf("Enter length of the string:");
	scanf("%d",&n);
	printf("\nEnter the string:");
	for(i=0;i<n;i++){
		scanf("%d",&input[i]);
	}
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
				st='q';
				else
				st='p';
				break;
				
		}
		i++;
	}while(i<n);
	if(st=='q')
	printf("Given number is even binary of final char : %c",st);
	else
	printf("Given number is not an even binary");
	
}
