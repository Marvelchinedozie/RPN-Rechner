/**
 ******************************************************************************
 * @file    main.c
 * @author  Franz Korf
 * @brief   Kleines Testprogramm fuer neu erstelle Fonts.
 ******************************************************************************
 */
/* Includes ------------------------------------------------------------------*/

#include "init.h"
#include "display.h"
#include "controller.h"
#include "error.h"

int main(void) {
   initITSboard(); // Initialisierung des ITS Boards

   // Begruessungstext
   init_display();
   
   while (1) {

      int status = controller();

     switch(status)
     {
         case ERR_OVERFLOW:
            error_overflow();
            break;
         
         case ERR_UNDERFLOW:
            error_underflow();
            break;

         case ERR_DIV_ZERO:
            error_null_division();
            break;

         default:
            break;
     }
   }
}

// EOF
