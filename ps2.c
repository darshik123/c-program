#include<stdio.h>
#include<string.h>
int main (){
    char arr[] = {'H', 'E', 'L', 'L', 'O', '\n'};

    for (int i = 0;arr[i]!='\n';i++) {
        for (int j=0;j<=i;j++) {
            printf("%c",arr[j]);
        }
        printf("\n");
    }

    return 0;
}