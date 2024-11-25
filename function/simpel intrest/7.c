#include <stdio.h>

int sum(int a,int b,int c,int d){
    float total;
    total = a + b * c / d;
    return total;
}

int main (){
    int total;
  total=sum(8,30,7,6);
  printf("%d",total);
  return 0;
}