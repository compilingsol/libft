/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maria-sg <maria-sg@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 15:36:24 by maria-sg          #+#    #+#             */
/*   Updated: 2023/08/25 13:55:22 by maria-sg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Allocates (with malloc(3)) and returns a copy of
’s1’ with the characters specified in ’set’ removed
from the beginning and the end of the string.
*/

// static int ft_findchar(const char *s, char c)
// {
// 	size_t i;
	
// 	i = 0;
// 	while (s)
// 	{
// 		if (s[i] == c)
// 			return (1);
// 		i++;
// 	}
// 	return (0);
// }

char	*ft_strtrim(char const *s1, char const *set)
{
	// char *str;
	// size_t start;
	// size_t end;

	
	// start = ft_strchr(s1, set); //turn this into string instead of int?
	// end = ft_strrchr(s1, set);
	// str = malloc(ft_strlen(start + end));
	// if (str == NULL)
	// 	return (NULL);
	// str = st_strlcpy()
	static int
	ft_char_in_set(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char
	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	i;
	size_t	start;
	size_t	end;

	start = 0;
	while (s1[start] && ft_char_in_set(s1[start], set))
		start++;
	end = ft_strlen(s1);
	while (end > start && ft_char_in_set(s1[end - 1], set))
		end--;
	str = (char*)malloc(sizeof(*s1) * (end - start + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (start < end)
		str[i++] = s1[start++];
	str[i] = 0;
	return (str);
}

}


int main()
{
	char *str = "phola como hol estas";
	char *trim = "hol";
	printf("%s", ft_strtrim(str, trim));
}