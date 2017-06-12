/*Braxton Bevis
*LED 
*06/12/17
*/
#include "simpletools.h"                      // Include simple tools

int main()                                    // Main function
{
  
  while(1)
  {
    high(0) ;
     pause(8);  
    high(15);
    pause(8);
      
   low(0);
    pause(8);  
   low(15);
   pause(8);
  
   high(0) ;
     pause(200);  
    high(15);
    pause(200);  
    
   low(0);
    pause(250);  
   low(15);
   pause(250);
  
  high(0) ;
     pause(500);  
    high(15);
    pause(150); 
     
   low(0);
    pause(150);  
   low(15);
   pause(200);
  
    high(0) ;
     pause(1000);  
    high(15);
    pause(1000);  
    
   low(0);
    pause(1000);  
   low(15);
   pause(21);
 }
 }   