#include<stdio.h>

  int sum(){
     for (int i = 65; i <=69; i++){
         for (int j = i; j >=65;j--)
         {
          printf("%c",j);
         }

      printf("\n");
     }
      }


int main (){

    sum();

    return 0;
}