/*
Braxton Bevis
Buttons
Project 5
6/14/17
*/
#include "simpletools.h"                      

int main()                                    
{
  
  // Add startup code here.

 
  while(1)
  {
    if( input(0) == 1 )
    {
      putChar (HOME) ;
      print("Press button for light %c\n", CLREOL) ;
  
    }  
    else
    {
      putChar (HOME) ;
      print("ERROR......ERROR......ERROR....__________***%$#@!#$%^&*(((((((*&^%@#$%^ %c\n", CLREOL) ;
      low(26);
      pause(100);
      high(27);
      pause(100);
    }      
    pause (100) ;
  }  
}
