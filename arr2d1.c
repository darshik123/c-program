#include <stdio.h>
int main (){

int arr1 [3][3];
int arr2 [3][3];
 int totalarr1=0;
 int totalarr2=0;
 int total;
for(int i=0;i<3;i++){
	for(int j =0;j<3;j++){
	printf("Enter element arr1 %d and %d:",i,j);
	  scanf("%d",&arr1[i][j]);
	}
	printf("\n");
}
for(int i=0;i<3;i++){
	for(int j =0;j<3;j++){
	printf("Enter element arr2 %d and %d:",i,j);
	  scanf("%d",&arr2[i][j]);
	}
	printf("\n");
}

for(int i = 0;i<3;i++){
	for(int j =0;j<3;j++){
		
	totalarr1 +=arr1[i][j];
    totalarr2 +=arr2[i][j];
	}
	
}
total = totalarr1 +totalarr2;
printf("%d+%d=%d",totalarr1,totalarr2,total);
return 0;
}