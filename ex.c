#include <stdio.h>
int main (){

    int k = 65;

    for (int i = 0; i < 5;i++){
        for (int j = 0; j <=i; j++){
         if(j%2==1){
             printf("%c ", k++);
        }else{
            printf("%c ",k+++32);
        }
        }
    printf("\n");
    }
    

    return 0;
}