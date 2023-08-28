/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maria-sg <maria-sg@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 18:28:10 by maria-sg          #+#    #+#             */
/*   Updated: 2023/08/28 21:16:53 by maria-sg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;

	i = ft_strlen(s);
	while (*s)
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i--;
	}
	return (NULL);
	// while (s[i] != (char)c)
	// {
	// 	if (s[i] == '\0')
	// 		return (NULL);
	// 	i--;
	// }
	// return ((char *)&s[i]);
}

// int main()
// {
// 	char *str = "Hola como estas";
// 	printf("strrchr is %s\n", strrchr(str, 'o'));
// 	printf("ft_strrchr is %s\n", ft_strrchr(str, 'o'));
// }