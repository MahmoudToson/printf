#include "main.h"
int _printf(const char *format, ...){

int char_counter = 0;
va_list args_list;
va_start(args_list, format); 
if(format == NULL)
return(-1);
while(*format){
if(*format != '%'){
write(1, format, 1);
char_counter++;
}
else{
format++;
if(*format == 'c'){
char c = va_arg(args_list, int);
write(1, &c, 1);
char_counter++;
}
if(*format == 's'){
int str_chain = 0;
int i;
char *str = va_arg(args_list, char*);
while(str[str_chain] != '\0')
str_chain++;
write(1, str, str_chain);
char_counter += str_chain;
}
if(*format == '%'){
write(1, format, 1);
char_counter++;
}
if(*format == '\0')
break;
}
format++;
}
va_end(args_list);
return char_counter;
}
