#include <stdio.h>

int sum(int a,int b,int c,int d){
    float total;
    total = a / b * c - d;
    return total;
}

int main (){
    float total;
  total=sum(123,10,2,63);
  printf("%.2f",total);
  return 0;
}