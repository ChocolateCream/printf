#include <stdio.h>
#include <stdlib.h>
#include<unistd.h>
#include <string.h>

int _putchar(char c)
{
	return (write(1, &c, 1));
}


int _printf(const char *format, ...)
{
	int str_len;
	int i;

	str_len = strlen(format);
	for (i = 0; i < str_len; i++)
		_putchar(format[i]);
	
	return (str_len);
}


int main(void)
{
	/*int len;
	len = printf("012%5d\n",1);
	printf("The length of the string = %d\n", len);*/

	/*int len;
	len = write(1, "Mina is learning about %d the write command", 30);
	printf("\nThe length of the string = %d\n", len);*/

}
