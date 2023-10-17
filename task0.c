#include "main.h"
int _printf(const char *format, ...){

    int char_counter = 0;
    va_list args_list;
    va_start(args_list, format);
    va_end(args_list);
    if(format == NULL){
         return(-1);
    }
    while(*format){
        if(*format == 'c'){
            write(1, format, 1);
        }
        if(*format == 's'){
            write(1, format, 1);
        }
        if(*format != '%'){
            write(1, format, 1);
            char_counter++;
        }
        else{
            format++;
            if(*format == '\0'){
            break;
        }
        if(*format == '%'){
            write(1, format, 1);
            char_counter++;
        }
        }
    }
    
}
