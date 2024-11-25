#include<stdio.h>

int converet (){
    
    int dollars;
    int ruppes = 80;
    printf("Enter dollar");
    scanf("%d", & dollars);
    int totalrupess = dollars * ruppes;
    return totalrupess;
}

int main (){
    int totalrupess = converet();
    printf("total ruppes %d", totalrupess);
    return 0;
}