#include<stdio.h>

int main (){

int i = 1;
do{
	int j = 1;
do{
	printf("%d\t",j);
	j++;
}while(j<=i);

printf("\n");
i++;
}while(i<=5);


return 0;
}