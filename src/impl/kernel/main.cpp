#include "print.h"





extern "C" void kernel_main(){
    print_clear();
    print_set_color(PRINT_COLOR_YELLOW, PRINT_COLOR_BLACK);
    print_str("--------------WELCOME--------------\n                  IT'S DUMMY OS                         ");
}