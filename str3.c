#include<stdio.h>


int main(){
    char str1[] = "skill";
    char str2[] = "qode";
    char str3[10];

    int length = 0;

    for (int i = 0; i < 5;i++,length++) {
        str3[length] = str1[i];
    }


for (int i = 0; i < 4;i++,length++) {
        str3[length] = str2[i];
    }

    for (int i = 0; i < 9; i++)
    {
        printf("%c", str3[i]);
    }
    
    return 0;
}