#include<stdio.h>
void sum();
int sum1 (){
    int a = 10;
    int b = 20;
    int total = 0;
    total = a + b;
    return total;
}
int main (){
    int total;
    sum();
    total = sum1();
    printf("\nsum is %d",total);

    return 0;
}


void sum (){
    int a = 10;
    int b = 20;
    printf("sum A+B=%d", a + b);
}