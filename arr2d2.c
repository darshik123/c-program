#include <stdio.h>
int main (){

int arr[3][3];
int uppre=0;
int lower=0;
int dimond=0;
for(int i =0;i<3;i++){
for(int j =0;j<3;j++){
    printf("Enter value of %d and %d:",i,j);
	  scanf("%d",&arr[i][j]);
}
}

for(int i =0;i<3;i++){
for(int j =0;j<3;j++){
   if (i<j){
     uppre += arr[i][j];
   } else if(i>j){
   lower +=arr[i][j];
   } else{
    dimond +=arr[i][j];
   }
}
printf("\n");
}

printf("upper:%d\n",uppre);
printf("lower:%d\n",lower);
printf("dimond:%d",dimond);
return 0;
}