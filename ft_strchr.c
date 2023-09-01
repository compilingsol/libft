/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maria-sg <maria-sg@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 17:31:11 by maria-sg          #+#    #+#             */
/*   Updated: 2023/09/01 14:15:12 by maria-sg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	while (s[i] != (char)c)
	{
		if (s[i] == '\0')
			return (NULL);
		i++;
	}
	return ((char *)&s[i]);
}

/*
The  strchr() function returns a pointer to the first occurrence of
the character c in the string s.
*/

// int main()
// {
// 	char *str = "Hola como estas";
// 	printf("strchr is %s\n", strchr(str, 'o'));
// 	printf("ft_strchr is %s\n", ft_strchr(str, 'o'));
// }