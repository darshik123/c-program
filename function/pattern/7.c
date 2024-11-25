#include<stdio.h>
int forloop(int n){
   
   
    for (int i =1; i <=5;i++) {
       if(i%2==0){
           for(int j =1; j<=i;j++){
               printf("%c",n+32);
               n++;
           }
       } else{
       for(int j =1; j <=i;j++){
             printf("%c",n);
               n++;
           }
           }
           printf("\n");
}
}
int main (){
    forloop(65);
    return 0;
}