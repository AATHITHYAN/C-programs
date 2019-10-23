/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

//Arithmetic, Increment & Decrement Operators:
 
#include <stdio.h>

int main()
{
  //Declaration & Initialization:
  
   int a = 1 , b=2, c=3, d=4, e, f, g, h;
   
  //Logic Applying
  
    //Logic:1 
    
     e = a * b / c ;
     
     printf("e is : %d \n" , e);
     
    //Logic:2 
    
     f = a * b % c + 1 ;
     
     printf("f is : %d \n", f);
     
    //Logic:3 
    
     g = ++a * b - c-- ;
     
     printf("g is : %d \n", g);
     
    //Logic:4
    
     h = 7 - -b * ++d ;
     
     printf("h is : %d \n", h);
     
}
