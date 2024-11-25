#include<stdio.h>
int forloop(int n){
   
   
    for (int i =5; i >=1;i--) {
       for (int j = 5; j >=i; j--)
       {
           printf("%d ",n);
           n += 1;
       }
       
           printf("\n");
        
}
}
int main (){
    forloop(1);
    return 0;
}