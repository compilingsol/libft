/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maria-sg <maria-sg@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 17:31:11 by maria-sg          #+#    #+#             */
/*   Updated: 2023/08/18 18:37:58 by maria-sg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(const char *s, int c)
{
	size_t i;
	
	i = 0;
	while (*s)
	{
		if (s[i])
		{
			if (s[i] == (char)c)
				return ((char *)&s[i]);
			i++;
		}
	}
	return (NULL);
}

// int main()
// {
// 	char *str = "Hola como estas";
// 	printf("strchr is %p\n", strchr(str, 'c'));
// 	printf("ft_strchr is %s\n", ft_strchr(str, 'c'));
// }