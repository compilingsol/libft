/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maria-sg <maria-sg@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 13:33:04 by maria-sg          #+#    #+#             */
/*   Updated: 2023/09/01 17:39:05 by maria-sg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	numlen(int n)
{
	int	len;

	len = 0;
	if (n < 1)
		len++;
	while (n)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

static long long	absnum(long long n)
{
	long long	num;

	num = 1;
	if (n < 0)
		num = num * -n;
	else
		num = num * n;
	return (num);
}

static char	*newstr(size_t n)
{
	char	*str;

	str = (char *)malloc(sizeof(char) * (n + 1));
	if (!str)
		return (NULL);
	return (str);
}

char	*ft_itoa(int n)
{
	char			*str;
	int				sign;
	int				len;
	unsigned int	num;

	sign = 0;
	if (n < 0)
		sign = 1;
	len = numlen(n);
	str = newstr(len);
	if (!str)
		return (NULL);
	*(str + len) = '\0';
	num = absnum(n);
	while (len--)
	{
		*(str + len) = 48 + num % 10;
		num = num / 10;
	}
	if (sign)
		*(str) = '-';
	return (str);
}

//check if there is n
//check for + or -
//count the numbers
//turn digits into string
//allocate
//return string