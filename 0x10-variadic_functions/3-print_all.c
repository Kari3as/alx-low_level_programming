#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - function that prints anything
 *
 * @format: is a list of types of arguments
 *
 * Return: nothing
*/


void print_all(const char * const format, ...)
{
    va_list args;
    int i = 0;
    char c;
    int num;
    double fnum;
    char *str;

    va_start(args, format);

    while (format && format[i])
    {
        if (i > 0)
            printf(", ");

        switch (format[i])
        {
            case 'c':
                c = va_arg(args, int);
                printf("%c", c);
                break;
            case 'i':
                num = va_arg(args, int);
                printf("%d", num);
                break;
            case 'f':
                fnum = va_arg(args, double);
                printf("%f", fnum);
                break;
            case 's':
                str = va_arg(args, char *);
                if (str == NULL)
                    printf("(nil)");
                else
                    printf("%s", str);
                break;
        }

        i++;
    }

    va_end(args);
    printf("\n");
}
