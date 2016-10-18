#include "TVout.h"
#include "fontALL.h"

TVout TV;
int a = 0;
void setup()
{

  //TV.begin(PAL, 72, 56);
  TV.begin(_NTSC);
    TV.select_font(font8x8);  
  delay(1000);

  TV.print( 10, 10, "               +++++6TAK+++++                               )))))))))CRIME $OLUTION$$$$$$ " );  //TVout software for the World!
  
  delay(1000);
  //TV.draw_line(2, 48, 5, 53, WHITE);
  //TV.fill(WHITE);
  //TV.draw_line(0, 0, 10, 10, WHITE);
  //TV.draw_circle(36, 28, 10, WHITE);
  //TV.set_pixel(36, 28, WHITE);

//  drawScreen;
  TV.clear_screen ();

  //TV.draw_rect(0, 0, 71, 55, WHITE, BLACK);
  TV.draw_rect(0, 0, 127, 94, WHITE, BLACK);
  TV.draw_rect(2, 2, 5, 5, WHITE, BLACK);
  TV.draw_rect(2, 87, 5, 5, WHITE, WHITE);

  delay(1500);
}


void drawScreen(){
  TV.clear_screen ();

  TV.draw_rect(0, 0, 71, 55, WHITE, BLACK);
  TV.draw_rect(2, 2, 5, 5, WHITE, BLACK);
  TV.draw_rect(2, 48, 5, 5, WHITE, WHITE);
}

void loop()
{

  /*TV.delay (60);
  TV.tone(480, 500);        // Play a 480 tone for half second
  delay(500);               // wait for a half second
  TV.print (30, 60, "Wait one Second" );
  TV.tone(440, 500);        // Play a 480 tone for half second
  delay(500);
  TV.draw_rect(20, 20, 105, 56, WHITE); //draw a white rectangle
  delay(1500);               // wait for two seconds
  */
  //TV.shift(1, DOWN);


  TV.tone(480, 500);        // Play a 480 tone for half second
  delay(25);               // wait for a half second
  TV.tone(440, 500);        // Play a 480 tone for half second
  delay(25);               // wait for a half second

  //TV.shift(1, RIGHT);
  TV.draw_rect(2+a, 2, 5, 5, BLACK, BLACK);
  TV.draw_rect(2+a, 87, 5, 5, BLACK, BLACK);
   TV.draw_rect(2+a, 22, 5, 5, BLACK, BLACK);
  TV.draw_rect(2+a, 67, 5, 5, BLACK, BLACK);
  a=a+3;
  TV.draw_rect(2+a, 2, 5, 5, WHITE, BLACK);
  TV.draw_rect(2+a, 87, 5, 5, WHITE, WHITE);
  TV.draw_rect(2+a, 22, 5, 5, WHITE, BLACK);
  TV.draw_rect(2+a, 67, 5, 5, WHITE, WHITE);
  TV.print( 10, 10, "               +++++6TAK+++++                               )))))))))CRIME $OLUTION$$$$$$ " ); 
  delay(1000);
  

  if (a>117){
    delay(1000);
    a=0;
    asm volatile ("  jmp 0");
  }
   
}
