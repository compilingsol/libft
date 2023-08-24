/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maria-sg <maria-sg@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 17:30:06 by maria-sg          #+#    #+#             */
/*   Updated: 2023/08/22 15:40:15 by maria-sg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t	i;
	size_t	j;

	if (needle[0] == '\0')
		return ((char *)haystack);
	i = 0;
	while (haystack[i] && i < len)
	{
		j = 0;
		while (haystack[i + j] == needle[j] && (i + j) < len)
		{
			if (needle[j + 1] == '\0')
				return (char *)&haystack[i];
            j++;
		}
		i++;
	}
	return (NULL);
}

int	main(void)
{
	char	*str;
	char	*to_find;

	str = "Hello World!";
	to_find = "lox";
	printf("%c\n", ft_strnstr(str, to_find, 2));
	printf("%c\n", strnstr(str, to_find, 2));
	to_find = "";
	printf("%s\n", ft_strnstr(str, to_find, 10));
	printf("%s\n", strnstr(str, to_find, 10));
	to_find = "llo";
	printf("%s\n", ft_strnstr(str, to_find, 2));
	printf("%s\n", strnstr(str, to_find, 2));
	to_find = "Wo";
	printf("%s\n", ft_strnstr(str, to_find, 20));
	printf("%s\n", strnstr(str, to_find, 20));
	to_find = "!";
	printf("%s\n", ft_strnstr(str, to_find, 20));
	printf("%s\n", strnstr(str, to_find, 20));
}