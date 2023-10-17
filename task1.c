#include "main.h"


/**
 *_printf - prints string and chars
 *
 *@format: format string
 *
 *Return: string and chars
*/
int _printf(const char *format, ...)
{
int char_counter = 0;
va_list args_list;
va_start(args_list, format);
if (format == NULL || *format == '\0')
return (-1);
while (*format)
{
if (*format != '%')
{
write(1, format, 1);
char_counter++;
}
else
{
format++;
if (*format == 'd')
{
int d = va_arg(args_list, int);
write(1, &d, 1);
char_counter++;
}
}
format++;
}
va_end(args_list);
return (char_counter);
}
