#include<stdio.h>

int main (){
int n = 1;
int i = 1;
do{
	int j = 1;
do{
	printf("%d\t",n);
	n+=1;
	j++;
}while(j<=i);

printf("\n");
i++;
}while(i<=5);


return 0;
}