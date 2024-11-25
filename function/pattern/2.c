#include<stdio.h>
int forloop(){
   
   
    for (int i =1; i <=5;i++) {
       for (int j = 1; j <=i; j++)
       {
           printf("%d",i);
       }
       
           printf("\n");
        
}
}
int main (){
    forloop();
    return 0;
}