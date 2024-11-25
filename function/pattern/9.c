#include<stdio.h>
int forloop(int n){
   
   
    for (int i =1; i <=5;i++) {
      
           for(int j =1; j<=i;j++){
              
                 
      
                 printf("%c", n++);
             
           }
       
           printf("\n");
}
}
int main (){
    forloop(65);
    return 0;
}