



// without argument and return 
// #include <stdio.h>

// int sum(){
   
//   printf("%d", 9 * 4 / 2 + 12);

// }

// int main (){
//           sum();
//   return 0;
// }



// with argument and return
#include <stdio.h>

int sum(int a,int b,int c,int d){
    int total;
    total = a * b / c + d;
    return total;
} 

int main (){
  int total;
  total=sum(9,4,2,12);
  printf("%d",total);
  return 0;
}