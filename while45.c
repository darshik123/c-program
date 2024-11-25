#include <stdio.h>

int main (){
 
  int i = 1;
  while(i<=7){
	  if(i<=4){
	  int j = 5;
	  while(j>=i){
		  
		printf(" ");
		  j--;
	  }
	  int k = 1;
	  while(k<=i){
		  printf("* ");
		  k++;
	  }
	  } else{
		   int j = 3;
        while(j<=i){
			printf(" ");
			j++;
		}	
        int k = i;
        while(k<=7){
	    printf("* ");
	    k++;
  }		
	  }
	  printf("\n");
	  i++;
  }
  
  
return 0;
}