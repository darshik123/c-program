#include<stdio.h>

int pr(){
    int sub1 = 75;
    int sub2 = 80;
    int sub3 = 70;
    int total = sub1 + sub2 + sub3;
    int pr;
    pr =total*100/300;
    return pr;
  }

int main (){
    int percentage =  pr();
    printf("percentage=%d", percentage);
    return 0;
}
