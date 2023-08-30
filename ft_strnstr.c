/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maria-sg <maria-sg@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 17:30:06 by maria-sg          #+#    #+#             */
/*   Updated: 2023/08/30 19:14:40 by maria-sg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (!little)
		return ((char *)big);
	i = 0;
	while (big[i])
	{
		j = 0;
		while (big[i] == little[j] && i < len)
		{
			i++;
			j++;
		}
		if (!little[j])
			return ((char *)&big[i - j]);
		i++;
	}
	return (NULL);
}

// char *strnstr(const char *s, const char *find, size_t slen)
// {
// 	char c, sc;
// 	size_t len;

// 	if ((c = *find++) != '\0') {
// 		len = strlen(find);
// 		do {
// 			do {
// 				if (slen-- < 1 || (sc = *s++) == '\0')
// 					return (NULL);
// 			} while (sc != c);
// 			if (len > slen)
// 				return (NULL);
// 		} while (ft_strncmp(s, find, len) != 0);
// 		s--;
// 	}
// 	return ((char *)s);
// }

// int	main(void)
// {
// 	char	*str;
// 	char	*to_find;

// 	str = "Hello World!";
// 	to_find = "lox";
// 	printf("%s\n", ft_strnstr(str, to_find, 2));
// 	printf("%s\n", strnstr(str, to_find, 2));
// 	to_find = "";
// 	printf("%s\n", ft_strnstr(str, to_find, 10));
// 	printf("%s\n", strnstr(str, to_find, 10));
// 	to_find = "llo";
// 	printf("%s\n", ft_strnstr(str, to_find, 2));
// 	printf("%s\n", strnstr(str, to_find, 2));
// 	to_find = "Wo";
// 	printf("%s\n", ft_strnstr(str, to_find, 20));
// 	printf("%s\n", strnstr(str, to_find, 20));
// 	to_find = "!";
// 	printf("%s\n", ft_strnstr(str, to_find, 20));
// 	printf("%s\n", strnstr(str, to_find, 20));
// }