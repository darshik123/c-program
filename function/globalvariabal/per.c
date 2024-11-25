#include<stdio.h>

int marks1 = 49;
int marks2 = 62;
int marks3 = 50;
float pr;
int total;

int totalmarks (){
    total = marks1 + marks2 + marks3;
    return total;
}

int per(){
    int total;
    total = totalmarks();
        pr = total * 100 / 300;
        return pr;
}

int print(){
     int total = totalmarks();
     float totalpr=per();
   
     printf("total marks %d totl pr %.2f",total,pr);
}



int main(){

    print();
    return 0;
}