/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maria-sg <maria-sg@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 18:51:22 by maria-sg          #+#    #+#             */
/*   Updated: 2023/10/10 14:29:34 by maria-sg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_printarg(va_list args, char c)
{
	int	chars;

	chars = 0;
	if (c == 'c')
		chars += ft_printchar(va_arg(args, int));
	else if (c == 's')
		chars += ft_printstr(va_arg(args, char *));
	else if (c == 'd' || c == 'i')
		chars += ft_printdigit(va_arg(args, int), 10, 0);
	else if (c == 'p')
		chars += ft_printpointer(va_arg(args, unsigned long long));
	else if (c == 'u')
		chars += ft_printdigit(va_arg(args, unsigned int), 10, 0);
	else if (c == 'x')
		chars += ft_printdigit(va_arg(args, unsigned int), 16, 0);
	else if (c == 'X')
		chars += ft_printdigit(va_arg(args, unsigned int), 16, 1);
	else if (c == '%')
		chars += write(1, "%", 1);
	else
		chars += write(1, &c, 1);
	return (chars);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	size_t	i;
	size_t	chars;

	va_start(args, str);
	i = 0;
	chars = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			chars += ft_printarg(args, str[i + 1]);
			i++;
		}
		else
		{
			chars += write(1, &str[i], 1);
		}
		i++;
	}
	va_end(args);
	return (chars);
}

// int main(void)
// {
//     // Test 1: Printing strings
//     char *str = "Hello, world!";
//     printf("Standard printf: %s\n", str);
//     ft_printf("Custom ft_printf: %s\n", str);

//     // Test 2: Printing integers
//     int num = 42;
//     printf("Standard printf: %d\n", num);
//     ft_printf("Custom ft_printf: %d\n", num);

//     // Test 3: Printing hexadecimal
//     int hex = 0x1A3;
//     printf("Standard printf: %x\n", hex);
//     ft_printf("Custom ft_printf: %x\n", hex);

//     // Test 4: Printing pointers
//     void *ptr = &num;
//     printf("Standard printf: %p\n", ptr);
//     ft_printf("Custom ft_printf: %p\n", ptr);

//     // Test 5: Printing a mix of formats
//     int a = 10, b = 20, c = 30;
//     printf("Standard printf: a=%d, b=%d, c=%d\n", a, b, c);
//     ft_printf("Custom ft_printf: a=%d, b=%d, c=%d\n", a, b, c);

// 	// Test 6: Printing nulls
//     //int a = 10, b = 20, c = 30;
//     printf("Standard printf: a=%s, b=%p\n", (char *)NULL, NULL);
//     //ft_printf("Custom ft_printf: a=%d, b=%d, c=%d\n", a, b, c);

//     return 0;
// }
