#include<stdio.h>

float converet (){

    float sentimeters = 2.54;
    int inche;
    printf("Enter inche");
    scanf("%d",&inche);
    float totalsentimeters = inche * sentimeters;
    return totalsentimeters;
}

int main (){
    float totalsentimeters = converet();
    printf("total sentimeters %f", totalsentimeters);
    return 0;
}
