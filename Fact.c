#include<stdio.h>  
void fact()    
{    
 int i,fact=1,number;    
 printf("\nEnter a number its  Factorial: ");    
  scanf("%d",&number);    
    for(i=1;i<=number;i++){    
      fact=fact*i;    
  }    
  printf("\nFactorial of %d is: %d",number,fact);    
//return 0;  
}  
