#include<stdio.h>

int main (){

int i = 5;
do{
	int j = 5;
do{
	printf("%d\t",i);
	j--;
}while(j>=i);

printf("\n");
i--;
}while(i>=1);


return 0;
}