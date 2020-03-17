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

/* advance tasks functions prototypes */
int base2(unsigned int x, int dig);
int print_bin(va_list p);
int buff(char *buffer, int i, int length);
int base8(unsigned int x, int dig);
int base16_upper(unsigned int x, int dig);
int base16_down(unsigned int x, int dig);
int print_int(int number);
int print_unsigned(unsigned int n);

/* format specifiers */
int _putchar(char c);
int is_a_string(va_list p);
int is_int(va_list arg);
int is_decimal(va_list p);
int is_a_char(va_list p);
int is_percent(va_list __attribute__((unused)) args);
int is_unsigned(va_list n);
int is_hexa_upper(va_list p);
int is_hexa_down(va_list p);
int is_octal(va_list p);
int is_rot13(va_list arg);
/* execute_function_call prototype */
int execute_function_call(char, va_list);

#endif
