/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maria-sg <maria-sg@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 14:36:13 by maria-sg          #+#    #+#             */
/*   Updated: 2023/08/24 16:00:15 by maria-sg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Applies the function ’f’ on each character of
the string passed as argument, passing its index
as first argument. Each character is passed by
address to ’f’ to be modified if necessary.
*/

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;
	
	i = 0;
	if (s && f)
	{
		while (s[i])
		{
			(*f)(i, &s[i]);
			//s[i] = f(i, s[i]);
			i++;
		}
	}
}

// int main()
// {
// 	char str[] = "Hola, como Estas?";
// 	printf("Original string: %s\n", str);

// 	ft_striteri(str, ft_toupper);

// 	printf("New string: %s\n", str);
// 	return 0;
// }