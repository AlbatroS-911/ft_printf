#include "stdio.h"
#include "ft_printf.h"

int main(void)
{
	int num = -85441;
	char n = 'p';
	char *str = "This is new string";
	int i = ft_printf("unsign int: %u\n", num);
	int j = printf("unsign int: %u\n", num);
	
	printf("Original:------\n");
	printf("Integer: %d\n", num);
	printf("Address: %p\n", &num);
	printf("hexa: %x\n", num);
	printf("HEXA: %X\n", num);
	printf("char: %c\n", n);
	printf("String: %s\n", str);
	printf("Unsigned : %u\n", 2147483647);
	printf("Counter: %d\n", j);
	printf("%%%%%%\n");
	printf("num = %d and char : %c and unsigned int = %u and string : %s\n", num, n, num, str);

	ft_printf("\n");

	ft_printf("Fake:------\n");
	ft_printf("Integer: %d\n", num);
	ft_printf("Address: %p\n", &num);
	ft_printf("hexa: %x\n", num);
	ft_printf("HEXA: %X\n", num);
	ft_printf("char : %c\n", n);
	ft_printf("String: %s\n", str);
	ft_printf("Unsigned : %u\n", 2147483647);
	ft_printf("Counter: %d\n", i);
	ft_printf("%%%%%%\n");
	ft_printf("num = %d and char : %c and unsigned int = %u and string : %s\n", num, n, num, str);
	
	return 0;
}
