#include <stdio.h>

int sum(int a,int b,int c,int d){
    int total;
    total = a * b / c * d;
    return total;
}

int main (){
    int total;
  total=sum(6,2,6,12);
  printf("%d",total);
  return 0;
}