#include <stdio.h>
int main(){
	int a,count=0,n,i;
	scanf("%d",&n);

	do{
		n=n-1;

		
		if(n!=2)
		{

			printf("Testing if case 1\n");
			switch(1);
		}
		else{

			printf("Testing else case 2\n");
			switch(2);
		}
	}while(n!=0);

	switch(a){
		case 1:
		printf("Testing switch case 1");
		printf("min(int,");
		count=count+1;
		break;

		case 2:

		printf("Testing switch case 2");
		printf("min(int,int)");
		break;

		default:
		break;
	}
//adjusting the paranthesis
	for(i=count;i>0;count--){
		printf(")");
	}
return 0;
}