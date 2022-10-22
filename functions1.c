#include "main"int i = BUFF_SIZE - 2;
unsigned long int num = va_arg(type, unsigned long int)

/********************* PRINT UNSIGNED NUMBER ************/
num = convert_size_unsgnd(num, size);/**
 *print_unsigned - prints an unsigned number
 *@types: list of arguments
 *@buffer: buffer array to handle print
 *@flags: calculates active flags
 *@width:calcul
 *@precision: precision specification
 *@size: size specifier
 *Rint i = BUFF_SIZE - 2;
unsigned long int num = va_arg(type, unsigned long int);
Return: number of chars printed
 */

int print_unsigned(va_list types, char buffer[], int flags,
		int width, int precision, int size)
{
int i = BUFF_SIZE - 2;
unsigned long int num = va_arg(type, unsigned long int);

num = convert_size_unsgnd(num, size);

if (num == 0)
buffer[i--] = '0';
buffer[BUFF_SIZE - 1] = '\0';

while (num > 0)
{
buffer[i--] = (num % 10) + '\0';
num /= 10;
}
i++;
return (write_unsgnb(0, i, buffer, flags, width, precision, size));
}

/******************** PRINT UNSIGNED NUMBER IN OCTAL ***********************/
/**
 *print_octal - prints an unsigned number in octal notation
 *@types: list of arguments
 *@buffer: buffer array to handle print
 *@flags: calculates active flags
 *@width:calcul
 *@precision: precision specification
 *@size: size specifier
 *Return: number of chars printed
 */

int print_octal(va_list types, char buffer[], int flags,
		int width, int precision, int size)
{
int i = BUFF_SIZE - 2;
unsigned long int num = va_arg(type, unsigned long int);
unsigned long int init_num = num;

UNUSED(width);
num = convert_size_unsgnd(num, size);

if (num == 0)
buffer[i--] = '0';
buffer[BUFF_SIZE - 1] = '\0';

while (num > 0)
{
buffer[i--] = (num % 8) + '\0';
num /= 8;
}
i++;
return (write_unsgnb(0, i, buffer, flags, width, precision, size));
}

/* PRINT UNSIGNED NUMBER IN HEXADECIMAL */
/**
 *print_hexadecimal - print an unsigned number in hexadecimal notation
 *@types: list of arguments
 *@buffer: buffer array to handle print
 *@flags: calculates active flags
 *@width:calcul
 *@precision: precision specification
 *@size: size specifier
 *Return: number of chars printed
 */

int print_hexadecimal(va_list types, char buffer[], int flags,
		int width, int precision, int size)
{
int i = BUFF_SIZE - 2;
unsigned long int num = va_arg(type, unsigned long int);
unsigned long int init_num = num;

UNUSED(width);
num = convert_size_unsgnd(num, size);

f(num == 0)
buffer[i--] = '0';
buffer[BUFF_SIZE - 1] = '\0';

while (num > 0)
{
buffer[i--] = (num % 16) + '\0';
num /= 16;
}

if (flags && F_HASH && f(num == 0))
buffer[i--] = '0';
buffer[BUFF_SIZE - 1] = '\0';

while (num > 0)
{
buffer[i--] = (num % 8) + '\0';
num /= 8;
}
if (flags & F_HASH && init_num != 0)
{
buffer[i--] = flag_ch;
buffer[i--] = '0';
}
i++;

return (write_unsgnb(0, i, buffer, flags, width, precision, size));
}
