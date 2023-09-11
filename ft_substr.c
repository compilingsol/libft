/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maria-sg <maria-sg@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 17:30:14 by maria-sg          #+#    #+#             */
/*   Updated: 2023/09/11 19:19:26 by maria-sg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Allocates (with malloc(3)) and returns a substring
from the string ’s’.
The substring begins at index ’start’ and is of
maximum size ’len’.
*/

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*newstr;
	size_t	slen;
	size_t	i;
	size_t	j;

	if (!s)
		return (NULL);
	slen = ft_strlen(s);
	i = start;
	j = 0;
	if (start >= slen)
	{
		newstr = (char *)malloc(1);
		if (!newstr)
			return (NULL);
		newstr[0] = '\0';
		return (newstr);
	}
	if (len > slen - start)
		len = slen - start;
	newstr = (char *)malloc(len + 1);
	if (!newstr)
		return (NULL);
	ft_strlcpy(newstr, s + start, len + 1);
	return (newstr);
}

// int main()
// {
// 	printf("%s", ft_substr("Hola como estas", 7, 10));
// }