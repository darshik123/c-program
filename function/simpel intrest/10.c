#include <stdio.h>

int sum(int a,int b,int c,int d){
    int total;
    total = a + b / c - d;
    return total;
}

int main (){
    int total;
  total=sum(21,72,31,1);
  printf("%d",total);
  return 0;
}