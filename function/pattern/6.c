#include<stdio.h>
int forloop(){
   
   
    for (int i =65; i <=69;i++) {
       for (int j = 65; j <=i; j++)
       {
           printf("%c",j);
          
       }
       
           printf("\n");
        
}
}
int main (){
    forloop();
    return 0;
}