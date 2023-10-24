#include "ft_printf.h"

int ft_printf(const char *format, ...);

int ft_printf(const char *format, ...)
{
    auto int i;
    va_list args; 
    va_start(args, format);
    while (format[i])
    {
        if (format[i] == '%')
        {
            i++;
            base_check(format, args);
        }
        else 
        {
            print_str(format, args);
        }
        i++;
    va_end(args);
    return (format);
}

