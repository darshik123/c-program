#include<stdio.h>
int forloop(int n){
   
   
    for (int i =5; i >=1;i--) {
       for (int j = 5; j >=i; j--)
       {
        if(n%2==1){
           printf("%d",n%2);
           n += 1;
        } else{
          printf("%d",n%2);
           n += 1;
        }
           
       }
       
           printf("\n");
        
}
}
int main (){
    forloop(1);
    return 0;
}