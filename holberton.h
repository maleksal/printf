#ifndef ALB
#define ALB
#include <stdarg.h>
/**
 *struct format - structure
 *@format: the characrter
 *@f: the function to call
 */
typedef struct format
{
char *format;
int (*f)(va_list p);
} arg;


/* _printf function prototype */
int _printf(const char *format, ...);

/* get_specifier */
int get_specifier(char c, va_list);


int _putchar(char c);
int is_a_string(va_list p);
int is_int(va_list arg);
int is_a_decimal(va_list p);
int is_a_char(va_list p);
int is_percent(va_list __attribute__((unused)) args);
/* execute_function_call prototype */
int execute_function_call(char, va_list);

#endif
