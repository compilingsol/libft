/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maria-sg <maria-sg@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 15:36:24 by maria-sg          #+#    #+#             */
/*   Updated: 2023/08/22 15:27:14 by maria-sg         ###   ########.fr       */
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
	size_t	i;
	size_t	j;
	size_t	z;
	char *trimstr;

	//check if strings exist
	if (!s1 || !set)
		return (NULL);
	//initialize counter for beggining and end of the string
	i = 0;
	j = ft_strlen(s1) - 1;
	//trim from the start
	while (i <= j && ft_strchr(set, s1[i]))
		i++;
	if (i > j)
		return (ft_strdup(s1 + j + 1));
	//trim from the end
	while (j >= 0 && ft_strchr(set, s1[j]))
		j--;
	//allocate with malloc
	trimstr = malloc((j - i + 1) * sizeof(char));
	z = 0;
	//add null at the end of the string
	while (i < j)
		trimstr[z++] = s1[i++];
	trimstr[z] = 0;	
	return (trimstr);
}

// int main()
// {
// 	char *str = "hola como estas";
// 	char *trim = "hola";
// 	printf("%s", ft_strtrim(str, trim));
// }