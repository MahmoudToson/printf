/**
 *_printf - prints string and chars
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
char N = va_arg(args_list, int);
switch (*format)
{
case 'd':
char_counter += fprintf(stdout, "%d", N);
break;
case 'i':
if (N < 0)
return (-1);
char_counter += fprintf(stdout, "%i", N);
break;
}
