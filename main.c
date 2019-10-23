/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
  //Declaration Part:
  
    char a='a' , b='b', c;
    int i=1, j=2, k;
    double x=7.07, y;
  
  //Logic performing Part:
  
    //Logic:1
    
      c = i == j ? a-1 : b+1 ;
      
      printf("The output for the above Logic is :%d \n",c);
      
    //Logic:2
      
      k = j % 3 == 0? i + 4 : x ;
      
      printf("The output for the above Logic is :%d \n",k);
    
    //Logic:3 
     
      y = j % 3 ? i+4 : x;
      
      printf("The output for the above Logic is : %lf   ",y);
      
}
