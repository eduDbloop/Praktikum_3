#include "display_joystick.h"
#include <stdbool.h>
#include <stdlib.h>


/*
      *
      *Author: Jesus Eduardo Sandoval Melgarejo
      *
*/

// Die Tage werden hier ab dem 1.1.1970 gezählt (tagNummer == 0).
void gibDatumAus(int tagNummer)
{
  
  // Ihr Programm hier!

  showCursor();
  int cursor = 0;
  int num = 0;

  char[] s = "01.01.70";
  writeString(s);
  
  /* Moves cursor to the left */
  while(readAnalog(0) < 500) {
	if(cursor =! 0) 	
           cursor--;	

	moveCursor(0,cursor);
	num = 0;
  }
  
  /* Moves cursor to the right */
  while(readAnalog(0) > 600) {
	if(cursor < 7)
	   cursor++;

	moveCursor(0,cursor);
	num = 0;
  }

  /* Plus One */
  while(readAnalog(1) > 600) {
	if(num < 9) {
	   num++; 
	} else {
	  num = 0;
	}

	putCharacter(0,cursor,num);
  }

  bisiesto = (anno % 4 == 0  && (anno % 100 != 0  ||  anno % 400 == 0));

}

int holeDatum() 
{

  // Ihr Programm hier!
  
  
  

  return tagNummer;
}

int main( void )
{
  initialize();
  while(true)
  {
    int start = holeDatum();
    int ende = holeDatum();
    int differenz = ende - start;
    writeNumber(abs(differenz));
    while(readAnalog(1) > 300);
    while(readAnalog(1) < 400);    
  }
  //return 0;
}
