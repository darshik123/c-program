


//with return and argument
// #include <stdio.h>

// int sum(int a,int b,int c,int d){
//     float total;
//     total = a * b + c * d;
//     return total;
// }

// int main (){
//     int total;
//   total=sum(10,11,27,12);
//   printf("%d",total);
//   return 0;
// }





//with argument
// #include <stdio.h>

// int sum(int a,int b,int c,int d){
   
//   printf("%d" ,a * b + c * d);
  
// }

// int main (){
    
//   sum(10,11,27,12);
  
//   return 0;
// }




//with return 
#include <stdio.h>

int sum(){
  int total = 10 * 11 + 27 * 12;
 
  return total;
}

int main (){
  int total;
   total = sum();
   printf("%d", total);

   return 0;
}