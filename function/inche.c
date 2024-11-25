#include<stdio.h>

int converet (){
    
    int inche = 12;
    int feet;
    printf("Enter feet");
    scanf("%d",&feet);
    int totalinche = feet * inche;
    return totalinche;
}

int main (){
    int totalinche = converet();
    printf("total inche %d", totalinche);
    return 0;
}