/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maria-sg <maria-sg@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 15:36:24 by maria-sg          #+#    #+#             */
/*   Updated: 2023/09/01 14:17:19 by maria-sg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Allocates (with malloc(3)) and returns a copy of
’s1’ with the characters specified in ’set’ removed
from the beginning and the end of the string.
*/

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*newstr;
	size_t	i;

	if (!s1 || !set)
		return (NULL);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	i = ft_strlen(s1);
	while (i && ft_strchr(set, s1[i]))
		i--;
	newstr = ft_substr(s1, 0, i + 1);
	return (newstr);
}

// int main()
// {
// 	char *str = "phola como hol estas";
// 	char *trim = "hol";
// 	printf("%s", ft_strtrim(str, trim));
// }